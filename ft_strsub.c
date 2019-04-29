/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnightwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:03:15 by dnightwi          #+#    #+#             */
/*   Updated: 2019/04/11 15:05:14 by dnightwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;

	i = 0;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res || !s)
		return (NULL);
	res[len] = '\0';
	if (!len)
		return (res);
	while (i < len)
	{
		res[i] = s[start];
		start++;
		i++;
	}
	return (res);
}
