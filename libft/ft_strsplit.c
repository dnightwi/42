/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnightwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 14:26:12 by dnightwi          #+#    #+#             */
/*   Updated: 2019/04/11 16:42:43 by dnightwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_sizeof_arr(char const *s, char c)
{
	int i;
	int	size;

	i = 0;
	size = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i - 1] == c) || (i == 0 && s[i] != c))
			size++;
		i++;
	}
	return (size);
}

static int		ft_sizeof_str(char const *s, char c)
{
	int j;

	j = 0;
	while (s[j] != c && s[j])
		j++;
	return (j);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**res;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if (!(res = (char**)malloc(sizeof(char*) * (ft_sizeof_arr(s, c) + 1))))
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		res[j] = (char *)malloc(sizeof(char) * (ft_sizeof_str(s + i, c)));
		if (ft_sizeof_str(s + i, c) == 0)
			continue;
		k = 0;
		while (s[i] != c && s[i])
			res[j][k++] = s[i++];
		res[j++][k] = '\0';
	}
	res[j] = 0;
	return (res);
}
