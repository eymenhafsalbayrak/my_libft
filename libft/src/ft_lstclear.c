/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbayra <ealbayra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:21:20 by ealbayra          #+#    #+#             */
/*   Updated: 2022/10/26 19:16:15 by ealbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*dex;
	t_list	*t;

	dex = *lst;
	while (dex)
	{
		(*del)(dex->content);
		t = dex->next;
		free(dex);
		dex = t;
	}
	*lst = NULL;
}
