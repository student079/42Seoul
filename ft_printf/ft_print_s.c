/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:40:48 by jinsjeon          #+#    #+#             */
/*   Updated: 2023/03/29 03:05:12 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_s(va_list **a)
{
	char	*vatemp;
	ssize_t	print_size;

	print_size = 0;
	vatemp = (char *)va_arg(**a, char *);
	if (vatemp == NULL)
		vatemp = "(null)";
	print_size = write (1, vatemp, ft_strlen(vatemp));
	return (print_size);
}
