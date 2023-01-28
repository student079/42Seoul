/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 22:01:03 by jinsjeon          #+#    #+#             */
/*   Updated: 2023/01/20 14:03:11 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	pass_isspace_fix_sign(const char *str, int *sign)
{
	int	idx;

	idx = 0;
	while (str[idx] && (str[idx] == ' ' || (str[idx] >= 9 && str[idx] <= 13)))
		idx++;
	if (str[idx] && (str[idx] == '+' || str[idx] == '-'))
	{
		if (str[idx] == '-')
			*sign = *sign * -1;
		idx++;
	}
	return (idx);
}

int	ft_atoi(const char *str)
{
	int	idx;
	int	sign;
	int	data;

	data = 0;
	idx = 0;
	sign = 1;
	idx = pass_isspace_fix_sign(str, &sign);
	if (!(str[idx] >= '0' && str[idx] <= '9'))
		return (0);
	while (str[idx] && (str[idx] >= '0' && str[idx] <= '9'))
	{
		data = data * 10 + (str[idx] - '0');
		idx++;
	}
	return (data * sign);
}
