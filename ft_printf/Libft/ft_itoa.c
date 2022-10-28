/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachoe <jachoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:30:35 by jachoe            #+#    #+#             */
/*   Updated: 2022/08/29 14:32:54 by jachoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(long int nbr)
{
	size_t	cnt;

	cnt = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr = -nbr;
		cnt++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	size_t		len;
	char		*ret;
	long int	nbr;

	len = ft_len(n);
	nbr = n;
	ret = (char *)malloc(sizeof(char) * len + 1);
	if (!ret)
		return (0);
	if (nbr == 0)
		ret[0] = '0';
	if (nbr < 0)
	{
		ret[0] = '-';
		nbr = -nbr;
	}
	ret[len--] = '\0';
	while (nbr > 0)
	{
		ret[len] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;
	}
	return (ret);
}
