/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajawad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 04:50:43 by ajawad            #+#    #+#             */
/*   Updated: 2023/11/29 17:18:55 by ajawad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# ifdef BUFFER_SIZE
#  if BUFFER_SIZE < 0
#   undef BUFFER_SIZE
#   define BUFFER_SIZE 0
#  endif
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*ft_get_line(int fd, char *buffer, char **array, char *read_buff);
char	*ft_return(char *buffer, char *read_buff, char **array);
char	*ft_strjoin(char *buffer, char *array);
char	*ft_get_remaining(char *read_buff, int flag);
size_t	newline_idx(char *array);
size_t	ft_strlen(const char *s);
int		ft_check_newline(char *array);

#endif
