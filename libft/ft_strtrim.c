/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnightwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 17:58:52 by dnightwi          #+#    #+#             */
/*   Updated: 2019/04/12 15:11:27 by dnightwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	char			*res;

	if (!s)
		return (NULL);
	i = 0;
	while ((*s == ' ') || (*s == '\t') || (*s == '\n'))
		s++;
	while (s[i])
		i++;
	while (i && (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'))
		i--;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	res[i] = '\0';
	while (i)
	{
		i--;
		res[i] = s[i];
	}
	return (res);
}
