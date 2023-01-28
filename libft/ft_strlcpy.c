/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:18:04 by jinsjeon          #+#    #+#             */
/*   Updated: 2023/01/20 12:07:21 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	len;

	len = 0;
	idx = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[len])
		len++;
	while (src[idx] != '\0' && idx +1 < dstsize)
	{
		dst[idx] = src[idx];
		idx++;
	}
		dst[idx] = '\0';
	return (len);
}
