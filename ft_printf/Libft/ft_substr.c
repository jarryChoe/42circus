/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachoe <jachoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:31:48 by jachoe            #+#    #+#             */
/*   Updated: 2022/08/31 19:06:28 by jachoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ret;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s) < start + len)
		ret = (char *)malloc(sizeof(char) * (ft_strlen(s) - start) + 1);
	else
		ret = (char *)malloc(sizeof(char) * len + 1);
	if (!ret)
		return (0);
	i = start;
	j = 0;
	while (s[i] && j < len)
		ret[j++] = s[i++];
	ret[j] = '\0';
	return (ret);
}
