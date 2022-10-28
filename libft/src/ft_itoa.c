/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbayra <ealbayra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:36:08 by ealbayra          #+#    #+#             */
/*   Updated: 2022/10/27 21:00:34 by ealbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_p(long n)
{
	size_t	est;

	est = 0;
	if (n < 0)
	{
		est++;
		n = -n;
	}
	while (n >= 1)
	{
		est++;
		n /= 10;
	}
	return (est);
}

static char	*ft_o(char *rtn, long nbr, int len, int neg)
{
	if (nbr != 0)
		rtn = malloc(sizeof(char) * (len + 1));
	else
		return (rtn = ft_strdup("0"));
	if (!rtn)
		return (0);
	if (nbr < 0)
	{
		neg++;
		nbr = -nbr;
	}
	rtn[len] = '\0';
	while (--len)
	{
		rtn[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (neg == 1)
		rtn[0] = '-';
	else
		rtn[0] = (nbr % 10) + '0';
	return (rtn);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*rtn;
	long	nbr;
	int		neg;

	nbr = n;
	len = ft_p(nbr);
	rtn = 0;
	neg = 0;
	rtn = ft_o(rtn, nbr, len, neg);
	if (!rtn)
		return (0);
	return (rtn);
}

// int	main(void)
// {
// 	int n = -300;
// 	printf("%d", n);
// }
