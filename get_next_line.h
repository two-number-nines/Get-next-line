/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: vmulder <vmulder@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/04 13:12:51 by vmulder        #+#    #+#                */
/*   Updated: 2019/02/28 14:33:56 by vmulder       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 2

# include "libft/libft.h"

typedef struct		s_gnl
{
	char			buf[BUFF_SIZE + 1];
	char			*locationnl;
	char			*buf_leftover;
	char			*free1;
	int				i;
}					t_gnl;

int					get_next_line(const int fd, char **line);

#endif
