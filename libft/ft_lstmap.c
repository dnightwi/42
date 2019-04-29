/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnightwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 22:13:01 by dnightwi          #+#    #+#             */
/*   Updated: 2019/04/11 22:44:40 by dnightwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;

	if (!f || !lst)
		return (0);
	tmp = f(lst);
	if (!tmp)
		return (0);
	new = tmp;
	while (lst->next)
	{
		lst = lst->next;
		new->next = f(lst);
		if (!(new->next))
			return (0);
		new = new->next;
	}
	return (tmp);
}
