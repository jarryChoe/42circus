/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachoe <jachoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:31:30 by jachoe            #+#    #+#             */
/*   Updated: 2022/08/31 19:14:45 by jachoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_d;
	size_t	len_s;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (i + 1 < dstsize && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	if (dstsize < len_d)
		return (len_s + dstsize);
	else
		return (len_d + len_s);
}
