/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form_x_X.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachoe <jachoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:31:15 by jachoe            #+#    #+#             */
/*   Updated: 2022/11/08 18:32:02 by jachoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_len(unsigned int n)
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

static char	*ft_itoa_hex(unsigned int n)
{
	size_t	len;
	char	*ret;
	char	*hex;

	hex = "0123456789abcedf";
	len = ft_len(n);
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

int	form_x(unsigned int n, char form)
{
	int		len;
	char	*nb_h;
	int		i;

	nb_h = ft_itoa_hex(n);
	if (!nb_h)
		return (ERR);
	if (form == 'X')
	{
		i = 0;
		while (nb_h[i])
		{
			nb_h[i] = ft_toupper(nb_h[i]);
			i++;
		}
	}
	ft_putstr_fd(nb_h, 1);
	len = ft_strlen(nb_h);
	free(nb_h);
	return (len);
}
