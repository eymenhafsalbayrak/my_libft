/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbayra <ealbayra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:29:31 by ealbayra          #+#    #+#             */
/*   Updated: 2022/10/24 17:58:43 by ealbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int		i;

	if (ft_strlen(s) <= (int)start)
		return (NULL);
	ret = malloc(len + 1);
	if (!ret)
		return (NULL);
	i = -1;
	while (s[start + ++i] && i < len)
		ret[i] = s[start + i];
	ret[i] = '\0';
	return (ret);
}

// int main()
// {
// 	char a[] = "eymen hafsa alp yalman";
// 	printf("%s", ft_substr(a, 10, 5));
// }