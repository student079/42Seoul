/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:40:58 by jinsjeon          #+#    #+#             */
/*   Updated: 2023/03/29 03:08:12 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_u(va_list **a)
{
	unsigned int	vatemp;
	char			*str;
	ssize_t			print_size;

	print_size = 0;
	vatemp = (unsigned int)va_arg(**a, unsigned int);
	if (vatemp == 0)
		print_size = write(1, "0", 1);
	else
	{
		str = ft_utoa(vatemp);
		print_size = write(1, str, ft_strlen(str));
		free(str);
	}
	return (print_size);
}
