/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:40:53 by jinsjeon          #+#    #+#             */
/*   Updated: 2023/03/29 02:35:45 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_sx(va_list **a)
{
	unsigned int	vatemp;
	ssize_t			print_size;
	char			*str;

	print_size = 0;
	vatemp = (unsigned int)va_arg(**a, unsigned int);
	if (vatemp == 0)
		return (write(1, "0", 1));
	str = ft_change_hexa((long long)vatemp);
	print_size = write(1, str, ft_strlen(str));
	free(str);
	return (print_size);
}
