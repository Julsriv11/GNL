/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarias-i <jarias-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:55:38 by jarias-i          #+#    #+#             */
/*   Updated: 2024/03/11 10:40:40 by jarias-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
# endif
# define MAX_FD 4096 //10240 es el nº máximo de archivos que puede abrir MacOS
                        // (se puede ver cuando pones en la terminal ulimit -a)
# include <unistd.h>    // y 4096 en linux, aunque el soft limit es de 1024
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <limits.h>
# include <sys/types.h>

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char    *to_the_endline(char *static_lines);
char    *full_line(char *static_lines);
char	*read_file(char *static_lines, int fd);
char    *get_next_line(int fd);

#endif
