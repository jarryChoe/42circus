/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachoe <jachoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:30:58 by jachoe            #+#    #+#             */
/*   Updated: 2022/11/08 18:31:58 by jachoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	checking_format(va_list ap, char format)
{
	if (format == 'c')
		return (form_c(va_arg(ap, int)));
	else if (format == 's')
		return (form_s(va_arg(ap, char *)));
	else if (format == 'p')
		return (form_p(va_arg(ap, void *)));
	else if (format == 'd')
		return (form_d_i(va_arg(ap, int)));
	else if (format == 'i')
		return (form_d_i(va_arg(ap, int)));
	else if (format == 'u')
		return (form_u(va_arg(ap, unsigned int)));
	else if (format == 'x')
		return (form_x(va_arg(ap, unsigned int), 'x'));
	else if (format == 'X')
		return (form_x(va_arg(ap, unsigned int), 'X'));
	else if (format == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}
