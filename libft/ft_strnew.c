/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnightwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 19:27:40 by dnightwi          #+#    #+#             */
/*   Updated: 2019/04/09 21:22:37 by dnightwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s;

	s = (char *)malloc(sizeof(char) * size + 1);
	if (!s)
		return (NULL);
	s = ft_memset(s, '\0', size + 1);
	return (s);
}
