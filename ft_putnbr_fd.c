/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnightwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 15:04:03 by dnightwi          #+#    #+#             */
/*   Updated: 2019/04/11 16:12:50 by dnightwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int res;

	res = (n < 0) ? -n : n;
	if (n < 0)
		write(fd, "-", 1);
	n = 1;
	while (res / 10)
	{
		n = (10 * n) + (res % 10);
		res /= 10;
	}
	res = (res % 10) + '0';
	write(fd, &res, 1);
	res = 0;
	while (n / 10)
	{
		res = (n % 10) + '0';
		write(fd, &res, 1);
		n /= 10;
	}
}
