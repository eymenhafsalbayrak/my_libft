/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbayra <ealbayra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:05:33 by ealbayra          #+#    #+#             */
/*   Updated: 2022/10/27 21:00:08 by ealbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *s, size_t n)
{
	char			*dst;
	const char		*src;

	if (!dest && !s)
		return (NULL);
	if (dest == s || n == 0)
		return (dest);
	dst = (char *)dest;
	src = (const char *)s;
	while (n--)
		dst[n] = src[n];
	return (dest);
}

// int main()
// {
// 	char	a[] = "eymenhaf";
// 	char	b[] = "alpi";
// 	printf("%s", ft_memcpy(a, b, 3));
// }
