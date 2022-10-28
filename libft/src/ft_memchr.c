/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbayra <ealbayra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:44:08 by ealbayra          #+#    #+#             */
/*   Updated: 2022/10/27 20:54:15 by ealbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	unsigned char	*ns;
	unsigned char	nc;

	ns = (unsigned char *)s;
	nc = (unsigned char *)c;
	while (len > 0)
	{
		if (*ns == nc)
			return (ns);
		ns++;
		len--;
	}
	return (NULL);
}

// int main()
// {
// 	char	a[] = "ahmet";
// 	printf("%p", ft_memchr(a, 'm', 3));
// }