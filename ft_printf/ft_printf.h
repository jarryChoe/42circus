/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachoe <jachoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:31:28 by jachoe            #+#    #+#             */
/*   Updated: 2022/11/08 18:35:15 by jachoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

# define ERR -1

int	ft_printf(const char *str, ...);
int	handling_data(va_list ap, const char *str);
int	checking_format(va_list ap, char format);
int	form_c(int c);
int	form_s(char *s);
int	form_d_i(int n);
int	form_p(void *addr);
int	form_u(unsigned int n);
int	form_x(unsigned int n, char form);

#endif
