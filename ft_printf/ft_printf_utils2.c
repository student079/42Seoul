/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 00:41:17 by jinsjeon          #+#    #+#             */
/*   Updated: 2023/03/29 03:27:13 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_change_hexa(long long num)
{
	char			*hexalist;
	char			*str;
	long long		leftnum;
	int				size;

	leftnum = ft_givenum(num);
	size = 0;
	hexalist = "0123456789abcdef";
	while (leftnum != 0)
	{
		leftnum = leftnum / 16;
		size++;
	}
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	str[size--] = '\0';
	leftnum = ft_givenum(num);
	while (size > 0)
	{
		str[size--] = hexalist[(leftnum % 16)];
		leftnum = leftnum / 16;
	}
	str[size] = hexalist[leftnum];
	return (str);
}

char	*ft_change_hexa_address(unsigned long num)
{
	char			*hexalist;
	char			*str;
	unsigned long	leftnum;
	int				size;

	leftnum = ft_givenum_address(num);
	size = 0;
	hexalist = "0123456789abcdef";
	while (leftnum != 0)
	{
		leftnum = leftnum / 16;
		size++;
	}
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	str[size--] = '\0';
	leftnum = ft_givenum_address(num);
	while (size > 0)
	{
		str[size--] = hexalist[(leftnum % 16)];
		leftnum = leftnum / 16;
	}
	str[size] = hexalist[leftnum];
	return (str);
}

long long	ft_givenum(long long num)
{
	unsigned int	finalnum;

	if (num < 0)
	{
		finalnum = 4294967295 + 1 + num;
		return (finalnum);
	}
	else
		return (num);
}

unsigned long	ft_givenum_address(unsigned long num)
{
	unsigned long	finalnumaddress;

	if (num < 0)
	{
		finalnumaddress = 4294967295 + 1 + num;
		return (finalnumaddress);
	}
	else
		return (num);
}
