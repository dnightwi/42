/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnightwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 19:05:56 by dnightwi          #+#    #+#             */
/*   Updated: 2019/04/26 20:12:42 by dnightwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# define BUFF_SIZE 1

typedef struct			s_gnllist
{
	int					fd;
	char				*str;
	struct s_gnllist	*next;
}						t_gnllist;

int						get_next_line(int fd, char **line);

#endif
