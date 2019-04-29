/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnightwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 21:48:38 by dnightwi          #+#    #+#             */
/*   Updated: 2019/04/11 21:56:02 by dnightwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *fr;

	fr = *alst;
	while (fr)
	{
		del(fr->content, fr->content_size);
		free(fr);
		fr = fr->next;
	}
	*alst = NULL;
}
