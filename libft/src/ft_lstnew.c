/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbayra <ealbayra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:50:57 by ealbayra          #+#    #+#             */
/*   Updated: 2022/10/26 15:05:04 by ealbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*dex;

	dex = malloc(sizeof(t_list));
	if (!dex)
		return (NULL);
	dex->content = content;
	dex->next = NULL;
	return (dex);
}
