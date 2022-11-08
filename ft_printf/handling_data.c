/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachoe <jachoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:31:36 by jachoe            #+#    #+#             */
/*   Updated: 2022/11/08 18:35:42 by jachoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handling_data(va_list ap, const char *str)
{
	int		bytes;
	int		size;
	size_t	i;

	i = 0;
	bytes = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			size = checking_format(ap, str[i + 1]);
			if (size == ERR)
				return (ERR);
			bytes += size;
			i += 2;
			continue ;
		}
		ft_putchar_fd(str[i], 1);
		bytes++;
		i++;
	}
	return (bytes);
}
