/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnightwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:04:45 by dnightwi          #+#    #+#             */
/*   Updated: 2019/04/10 21:56:49 by dnightwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*ft_itoa(int n)
{
	unsigned int	tmp;
	int				s;
	int				ch;
	char			*res;

	tmp = (n < 0) ? -n : n;
	ch = (n < 0) ? 1 : 0;
	s = 1;
	while (n /= 10)
		s++;
	s = (ch) ? s + 1 : s;
	res = (char *)malloc(sizeof(char) * (s + 1));
	if (!res)
		return (NULL);
	res[s] = '\0';
	while (--s >= 0)
	{
		res[s] = (tmp % 10) + '0';
		tmp /= 10;
	}
	res[0] = (ch) ? '-' : res[0];
	return (res);
}
