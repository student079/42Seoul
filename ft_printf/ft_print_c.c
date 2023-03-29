/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:40:20 by jinsjeon          #+#    #+#             */
/*   Updated: 2023/03/29 02:35:17 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_c(va_list **a)
{
	unsigned char	vatemp;
	ssize_t			print_size;

	print_size = 0;
	vatemp = (unsigned char)va_arg(**a, int);
	print_size = write(1, &vatemp, 1);
	return (print_size);
}
