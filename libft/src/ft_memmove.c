/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbayra <ealbayra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:02:48 by ealbayra          #+#    #+#             */
/*   Updated: 2022/10/27 20:54:35 by ealbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (src == dst)
		return (dst);
	if (src < dst)
	{
		while (n > 0)
		{
			n--;
			*((char *)dst + n) = *((char *)src + n);
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*((char *)dst + i) = *((char *)src + i);
			i++;
		}
		return (dst);
	}
}

// int main()
// {
// 	char a[] = "eymen";
// 	char b[] = "hafsayu";
// 	printf("%s", ft_memmove(a,b,4));
// }
