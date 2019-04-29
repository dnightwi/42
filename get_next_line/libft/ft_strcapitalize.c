/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnightwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 18:14:57 by dnightwi          #+#    #+#             */
/*   Updated: 2019/03/05 19:00:58 by dnightwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < '0')
				str[i] -= 32;
			else if (str[i - 1] > '9' && str[i - 1] < 'A')
				str[i] -= 32;
			else if (str[i - 1] > 'Z' && str[i - 1] < 'a')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
