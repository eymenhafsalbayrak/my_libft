/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbayra <ealbayra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:33:41 by ealbayra          #+#    #+#             */
/*   Updated: 2022/10/27 20:58:01 by ealbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//src'den dst'ye size-1 kadar kopyalar 
//src'nin uzunluğunu döndürür
size_t	ft_strlcpy(char *dst, const char*src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

// int main()
// {
// 	char a[] = "ravenfddkas";
// 	char b[] = "gandxxdsu";

// 	printf("%zu", ft_strlcpy(a, b, 4));
// }