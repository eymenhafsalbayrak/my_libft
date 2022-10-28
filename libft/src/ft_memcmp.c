/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbayra <ealbayra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:24:01 by ealbayra          #+#    #+#             */
/*   Updated: 2022/10/27 20:54:20 by ealbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//bellekte belirlenen iki stringi n kadar karsilastirir.
//fark varsa farki dondurur.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_uc;
	const unsigned char	*s2_uc;
	size_t				i;

	i = 0;
	s1_uc = (const unsigned char *)s1;
	s2_uc = (const unsigned char *)s2;
	while (i < n)
	{
		if (s1_uc[i] != s2_uc[i])
			return (s1_uc[i] - s2_uc[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char b[] = "eymenb";
// 	char a[] = "eymena";
// 	printf("%lu\n",sizeof(unsigned char));
// 	printf("%d", ft_memcmp(a,b, 6));
// }
