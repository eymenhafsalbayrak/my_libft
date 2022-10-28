/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbayra <ealbayra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:26:54 by ealbayra          #+#    #+#             */
/*   Updated: 2022/10/26 15:30:57 by ealbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*javis;

	if (*lst)
	{
		javis = ft_lstlast(*lst);
		javis->next = new;
	}
	else
		*lst = new;
}
