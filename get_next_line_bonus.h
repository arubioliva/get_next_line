/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arubio-o <arubio-o@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:15:14 by arubio-o          #+#    #+#             */
/*   Updated: 2023/11/03 14:20:10 by arubio-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif

# if BUFFER_SIZE < 0
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 0
# endif

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_buffer {
	char	content[BUFFER_SIZE];
	int		last;
	int		count;
}		t_buffer;

void	ft_clear(char **str);
char	*get_next_line(int fd);
size_t	strend(t_buffer const *buffer);
size_t	ft_strlen(char *str);

#endif // !GET_NEXT_LINE_BONUS_H
