/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnightwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:21:33 by dnightwi          #+#    #+#             */
/*   Updated: 2019/04/05 20:51:40 by dnightwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return (((char *)haystack));
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[j + i])
		{
			if (needle[j + 1] == '\0')
				return (((char *)haystack + i));
			j++;
		}
		i++;
	}
	return (0);
}
