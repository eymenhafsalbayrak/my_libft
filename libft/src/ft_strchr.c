/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbayra <ealbayra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 03:04:18 by ealbayra          #+#    #+#             */
/*   Updated: 2022/10/27 20:59:06 by ealbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//girilen karakteri dizi içinde arar
//ilk geçtiği yerden sonrasını döndürür
char	*ft_strchr(char *s, int c)
{
	int	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		s_len--;
	}
	return (NULL);
}

// int main()
// {
// 	char a[] = "vbjnkdcls";

// 	printf("%s", ft_strchr(a, 'j'));
// }
