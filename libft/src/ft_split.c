/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbayra <ealbayra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:01:21 by ealbayra          #+#    #+#             */
/*   Updated: 2022/10/28 03:59:52 by ealbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_word(char const *s, char c)//string = "arda Hafsa yalma" char = ' '
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] == c && s[i])//ilk basta eger stringimiz split etmemiz gereken chardan basliyormu diye bakiyoruz. ve o kadar index geciyoruz.
		i++;
	while (s[i])
	{
		while (s[i] != c && s[i])// stringimiz arguman olarak verdigimiz char'a esit olmadigi surece artiyor.
			i++;
		count++;// eger s[i] c'ye esitse count'u artiriyoruz. 
		while (s[i] == c && s[i])
			i++;
	}
	return (count);// bu fonksiyon 3 donduruyor, cunku arda Hafsa yalman bosluktan bolundugunde 3'tane kaliyor.
}

char	*ft_strcreate(const char *s, char c, size_t i)// bu fonksiyon bir sonraki c (disinda)'ye kadar ilerleyip onu bir diziye ceviriyor.
{
	size_t	len;
	size_t	tmp;

	len = 0;
	while (s[(int) i + len] != c && s[(int) i + len])
	{
		len++;
	}
	return (ft_substr(s, i, len));
}

char	**ft_split(char const *s, char c)//bir char * dizisi dondurecek. Arguman olarak bir string ve bir char aliyor. String'i arguman olarak aldigi char'dan boluyor. Ex = char **a = ft_split("arda Hafsa yalman", ' '). a -> "arda","Hafsa","yalman"
{
	size_t	i;
	size_t	res_i;
	char	**res;

	if (!s)
		return (NULL);
	//neden * sizeof(char *) kadar yer aciyoruz.
	res = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	res_i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			res[res_i] = ft_strcreate(s, c, i);
			res_i++;
		}
		while (s[i] != c && s[i])
		i++;
	}
	res[res_i] = 0;
	return (res);
}
