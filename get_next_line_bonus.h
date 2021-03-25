/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 22:26:02 by manuel            #+#    #+#             */
/*   Updated: 2021/03/25 23:44:08 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# define OPEN_MAX 1025

int		get_next_line(int fd, char **line);
int		gnl_file(int fd, char **str, char *buf);
int		gnl_set_line(int fd, char **str, char **line, char *end);

size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
