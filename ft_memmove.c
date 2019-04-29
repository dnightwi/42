/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnightwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 19:43:41 by dnightwi          #+#    #+#             */
/*   Updated: 2019/04/09 21:08:40 by dnightwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;

	i = 0;
	if (src <= dst)
	{
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		return (dst);
	}
	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
