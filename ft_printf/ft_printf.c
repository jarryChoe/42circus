/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachoe <jachoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:31:24 by jachoe            #+#    #+#             */
/*   Updated: 2022/11/08 18:32:04 by jachoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		bytes;
	va_list	ap;

	va_start(ap, str);
	bytes = handling_data(ap, str);
	va_end(ap);
	return (bytes);
}
