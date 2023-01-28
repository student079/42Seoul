/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:29:03 by jinsjeon          #+#    #+#             */
/*   Updated: 2023/01/20 13:50:49 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*newlist;
	t_list	*newnode;

	temp = lst;
	newlist = NULL;
	while (temp)
	{
		newnode = ft_lstnew(f(temp->content));
		if (!newnode)
		{
			ft_lstclear(&newlist, del);
			return ((void *)(0));
		}
		ft_lstadd_back(&newlist, newnode);
		temp = temp -> next;
	}
	temp = NULL;
	return (newlist);
}
