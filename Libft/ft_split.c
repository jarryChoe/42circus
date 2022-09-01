/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachoe <jachoe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:31:20 by jachoe            #+#    #+#             */
/*   Updated: 2022/08/29 14:32:46 by jachoe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free_all(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (0);
}

static size_t	ft_len_str(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

static size_t	ft_cnt_strs(const char *str, int c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] != c && str[i])
			cnt++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (cnt);
}

static char	*ft_strs(const char *str, int c)
{
	size_t	i;
	char	*ret;

	ret = (char *)malloc(sizeof(char) * ft_len_str(str, c) + 1);
	if (!ret)
		return (0);
	i = 0;
	while (str[i] && str[i] != c)
	{
		ret[i] = str[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;

	if (!s)
		return (0);
	split = (char **)malloc(sizeof(char *) * (ft_cnt_strs(s, c) + 1));
	if (!split)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			split[i] = ft_strs(s, c);
			if (!split[i++])
				return (ft_free_all(split));
		}
		while (*s && *s != c)
			s++;
	}
	split[i] = 0;
	return (split);
}
