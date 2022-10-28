/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbayra <ealbayra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:13:30 by ealbayra          #+#    #+#             */
/*   Updated: 2022/10/27 20:58:20 by ealbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*m;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	m = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	j = 0;
	if (!m)
		return (NULL);
	while (s1[i])
	{
		m[i] = s1[i];
		i++;
	}
	while (s2[j])
		m[i++] = s2[j++];
	m[i] = '\0';
	return (m);
}

// int main()
// {
// 	char a[] = "eymen";
// 	char b[] = "alpi";
// 	printf("%s", ft_strjoin(a, b));
// }