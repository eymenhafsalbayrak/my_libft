/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbayra <ealbayra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:11:24 by ealbayra          #+#    #+#             */
/*   Updated: 2022/10/26 15:13:31 by ealbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*dex;
	int		i;

	dex = lst;
	i = 0;
	while (dex)
	{
		i++;
		dex = dex->next;
	}
	return (i);
}
