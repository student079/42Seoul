/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:27:11 by jinsjeon          #+#    #+#             */
/*   Updated: 2023/01/18 05:13:14 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*destination;
	unsigned char	*source;

	i = -1;
	if (dst == NULL && src == NULL)
		return (dst);
	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (++i < len)
	{
		if (destination < source)
			destination[i] = source[i];
		else
			destination[len - i - 1] = source[len - i - 1];
	}
	return (destination);
}
