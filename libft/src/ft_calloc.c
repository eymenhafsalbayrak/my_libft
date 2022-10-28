/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbayra <ealbayra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:49:55 by ealbayra          #+#    #+#             */
/*   Updated: 2022/10/22 01:30:07 by ealbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t a, size_t n)
{
	void	*ptr;

	ptr = malloc (a * n);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, a * n);
	return (ptr);
}
