/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:40:38 by jinsjeon          #+#    #+#             */
/*   Updated: 2023/03/29 03:30:43 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_p(va_list **a)
{
	size_t	vatemp;
	ssize_t	print_size;
	char	*str;

	print_size = 0;
	vatemp = (size_t)va_arg(**a, size_t);
	if (vatemp == 0)
		return (write(1, "0x0", 3));
	str = ft_change_hexa_address((size_t)vatemp);
	print_size = write(1, "0x", 2);
	print_size += write(1, str, ft_strlen(str));
	free(str);
	return (print_size);
}
