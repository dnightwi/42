/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnightwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 19:30:20 by dnightwi          #+#    #+#             */
/*   Updated: 2019/04/26 20:29:08 by dnightwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char				*ft_mv(char *sl)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = sl;
	while (sl[i] != '\n' && sl[i])
		i++;
	sl = ft_strsub(sl, i + 1, ft_strlen(sl) - i);
	if (tmp)
		free(tmp);
	return (sl);
}

static void				ft_write(char *sline, char **line)
{
	int		i;

	i = 0;
	while (sline[i] != '\n' && sline[i])
		i++;
	*line = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (sline[i] != '\n' && sline[i])
	{
		(*line)[i] = sline[i];
		i++;
	}
	(*line)[i] = '\0';
}

static t_gnllist		*ft_create_lst(const int fd)
{
	t_gnllist	*new_elem;

	if (!(new_elem = (t_gnllist *)malloc(sizeof(t_gnllist))))
		return (NULL);
	new_elem->str = ft_strnew(0);
	new_elem->fd = fd;
	new_elem->next = NULL;
	return (new_elem);
}

static char				**ft_add(t_gnllist **lst, const int fd)
{
	t_gnllist	*check;

	check = *lst;
	if (!check)
	{
		if (!(*lst = ft_create_lst(fd)))
			return (NULL);
		return (&(*lst)->str);
	}
	while (check->fd != fd && check->next)
		check = check->next;
	if (check->fd == fd)
		return (&check->str);
	if (!(check->next = ft_create_lst(fd)))
		return (NULL);
	check = check->next;
	return (&check->str);
}

int						get_next_line(int fd, char **line)
{
	char				*buf;
	char				*tmp;
	char				**sline;
	int					ret;
	static t_gnllist	*fd_list = NULL;

	ret = 0;
	if ((buf = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1))) &&
		(sline = ft_add(&fd_list, fd)) && line)
		while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
		{
			buf[ret] = '\0';
			tmp = *sline;
			*sline = ft_strjoin(*sline, buf);
			free(tmp);
			if (ft_strchr(*sline, '\n'))
				break ;
		}
	free(buf);
	if (ret < 0 || !line || fd < 0)
		return (-1);
	ft_write(*sline, line);
	ret = (ft_strlen(*sline) == 0 && ret == 0) ? 0 : 1;
	*sline = ft_mv(*sline);
	return (ret);
}
