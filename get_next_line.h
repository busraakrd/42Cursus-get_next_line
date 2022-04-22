/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaraden <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:46:18 by bkaraden          #+#    #+#             */
/*   Updated: 2022/02/12 15:17:24 by bkaraden         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*get_save(char *save);
char	*get_line(char *str);
char	*get_read_and_save(int fd, char *save);
char	*get_next_line(int fd);
int		ft_strlen(char *str);
char	*ft_strchr(char *s, unsigned char c);
char	*ft_strjoin(char *s1, char *s2);
#endif
