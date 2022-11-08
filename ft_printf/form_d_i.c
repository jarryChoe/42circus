/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form_d_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachoe <jachoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:31:06 by jachoe            #+#    #+#             */
/*   Updated: 2022/11/08 18:31:59 by jachoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	form_d_i(int n)
{
	char	*nb;
	int		len;

	nb = ft_itoa(n);
	if (!nb)
		return (ERR);
	ft_putstr_fd(nb, 1);
	len = ft_strlen(nb);
	free(nb);
	return (len);
}
