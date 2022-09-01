/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachoe <jachoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:33:21 by jachoe            #+#    #+#             */
/*   Updated: 2022/08/29 14:33:24 by jachoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	res;
	size_t				i;
	int					flag;

	i = 0;
	res = 0;
	flag = 1;
	while (((9 <= str[i] && str[i] <= 13) || str[i] == 32) && str[i])
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9' && str[i])
	{
		res = res * 10 + (str[i] - '0');
		if (res > 9223372036854775807 && flag == 1)
			return (-1);
		if (res && res - 1 > 9223372036854775807 && flag == -1)
			return (0);
		i++;
	}
	return (flag * res);
}
