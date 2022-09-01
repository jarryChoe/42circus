/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachoe <jachoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:31:07 by jachoe            #+#    #+#             */
/*   Updated: 2022/08/29 14:32:50 by jachoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;

	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
	{
		tmp_dst = dst;
		tmp_src = src;
		while (len--)
			*tmp_dst++ = *tmp_src++;
	}
	else
	{
		tmp_dst = dst + (len - 1);
		tmp_src = src + (len - 1);
		while (len--)
			*tmp_dst-- = *tmp_src--;
	}
	return (dst);
}
