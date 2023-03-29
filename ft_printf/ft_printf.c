/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:40:03 by jinsjeon          #+#    #+#             */
/*   Updated: 2023/03/29 02:54:12 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

ssize_t	print_va(const char *str, va_list *a)
{
	ssize_t	print_size;

	print_size = 0;
	if (str[1] == 'c')
		print_size = ft_print_c(&a);
	else if (str[1] == 's')
		print_size = ft_print_s(&a);
	else if (str[1] == 'd')
		print_size = ft_print_d(&a);
	else if (str[1] == 'i')
		print_size = ft_print_i(&a);
	else if (str[1] == 'u')
		print_size = ft_print_u(&a);
	else if (str[1] == '%')
		print_size = write(1, "%%", 1);
	else if (str[1] == 'x')
		print_size = ft_print_sx(&a);
	else if (str[1] == 'X')
		print_size = ft_print_bx(&a);
	else if (str[1] == 'p')
		print_size = ft_print_p(&a);
	return (print_size);
}

int	ft_printf(const char *str, ...)
{
	va_list	a;
	int		i;
	ssize_t	print_size;
	ssize_t	past_print_size;

	i = 0;
	print_size = 0;
	va_start (a, str);
	while (str[i])
	{
		past_print_size = print_size;
		if (str[i] != '%')
			print_size += write(1, &str[i], 1);
		else
			print_size += print_va(&str[i++], &a);
		if (past_print_size > print_size)
		{
			print_size = -1;
			va_end(a);
			return (print_size);
		}
		i++;
	}
	va_end(a);
	return (print_size);
}
