/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:40:27 by jinsjeon          #+#    #+#             */
/*   Updated: 2023/03/29 02:35:22 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_d(va_list **a)
{
	int		vatemp;
	char	*str;
	ssize_t	print_size;

	print_size = 0;
	vatemp = (int)va_arg(**a, int);
	if (vatemp == 0)
		print_size = write(1, "0", 1);
	else
	{
		str = ft_itoa(vatemp);
		print_size = write(1, str, ft_strlen(str));
		free(str);
	}
	return (print_size);
}
