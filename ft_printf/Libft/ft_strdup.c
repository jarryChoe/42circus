/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachoe <jachoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:31:24 by jachoe            #+#    #+#             */
/*   Updated: 2022/08/29 14:32:45 by jachoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	len_s1;
	size_t	idx;

	len_s1 = ft_strlen(s1);
	idx = 0;
	p = (char *)malloc(sizeof(char) * (len_s1 + 1));
	if (!p)
		return (0);
	while (idx < len_s1)
	{
		p[idx] = s1[idx];
		idx++;
	}
	p[idx] = '\0';
	return (p);
}
