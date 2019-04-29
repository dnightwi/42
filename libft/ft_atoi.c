/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnightwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 12:40:01 by dnightwi          #+#    #+#             */
/*   Updated: 2019/04/10 20:18:37 by dnightwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	num1;
	int			check;

	num1 = 0;
	check = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			check = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (((num1 * check) == MAX && *str > '7' && *str <= '9') ||
				((num1 * check) > MAX && *str >= '0' && *str <= '9'))
			return (-1);
		if ((((num1 * check) < -MAX) && *str >= '0' && *str <= '9') ||
				(((num1 * check) == -MAX) && *str >= '8' && *str <= '9'))
			return (0);
		num1 = num1 * 10 + *(str++) - '0';
	}
	return (num1 * check);
}
