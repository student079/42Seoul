/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 20:40:43 by jinsjeon          #+#    #+#             */
/*   Updated: 2023/01/17 17:35:27 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size1;
	size_t	size2;
	size_t	i;
	size_t	j;
	char	*temp;

	i = 0;
	j = 0;
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	temp = (char *)malloc(sizeof(char) * (size1 + size2 + 1));
	if (temp == NULL)
		return (NULL);
	while (i < size1 + size2 + 1)
	{
		if (i < size1)
			temp[i] = s1[i];
		else if (i <= size1 + size2 && i >= size1)
			temp[i] = s2[i - size1];
		else
			temp[i] = '\0';
		i++;
	}
	return (temp);
}
