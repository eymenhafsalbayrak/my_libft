/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbayra <ealbayra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:58:31 by ealbayra          #+#    #+#             */
/*   Updated: 2022/10/24 13:03:12 by ealbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *ptr)
{
	char	*ret;
	int		i;

	if (!ptr)
		return (NULL);
	i = -1;
	ret = malloc(sizeof(char) * ft_strlen(ptr) + 1);
	while (ptr[++i])
		ret[i] = ptr[i];
	ret[i] = '\0';
	return (ret);
}

// int main()
// {
// 	char e[] = "Eymen";
// 	char *a = ft_strdup(e);
// 	printf("%s",a);
// }