/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachoe <jachoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:31:08 by jachoe            #+#    #+#             */
/*   Updated: 2022/11/22 15:00:01 by jachoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_len(unsigned long n)
{
	size_t	cnt;

	cnt = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 16;
		cnt++;
	}
	return (cnt);
}

static char	*ft_itoa_hex(unsigned long n)
{
	size_t	len;
	char	*ret;
	char	*hex;

	len = ft_len(n);
	hex = "0123456789abcdef";
	ret = (char *)malloc(sizeof(char) * len + 1);
	if (!ret)
		return (0);
	if (n == 0)
		ret[0] = '0';
	ret[len--] = '\0';
	while (n > 0)
	{
		ret[len] = hex[n % 16];
		n /= 16;
		len--;
	}
	return (ret);
}

int	form_p(void *addr)
{
	unsigned long long	mem;
	char				*ret;

	mem = (unsigned long long)addr;
	ret = ft_itoa_hex(mem);
	if (!ret)
		return (ERR);
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(ret, 1);
	free(ret);
	return (ft_len(mem) + 2);
}
