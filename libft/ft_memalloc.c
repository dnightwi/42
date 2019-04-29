/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnightwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:49:49 by dnightwi          #+#    #+#             */
/*   Updated: 2019/04/08 19:09:19 by dnightwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *c;

	c = (void *)malloc(sizeof(void) * size);
	if (!c)
		return (0);
	c = ft_memset(c, '\0', size);
	return (c);
}
