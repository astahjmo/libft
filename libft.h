/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 00:23:34 by johmatos          #+#    #+#             */
/*   Updated: 2022/05/05 04:12:10 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define TRUE 1
# define FALSE 0
# include <stdlib.h>
//types
typedef unsigned int				t_usize;
typedef unsigned char				t_uchar;
typedef unsigned long int			t_size;
// Strings

t_size		ft_isalpha(int c);
t_size		ft_isdigit(int c);
t_size		ft_isalnum(int c);
t_size		ft_isascii(int c);
t_size		ft_isprint(int c);
t_size		ft_strlen(const char *str);
t_size		ft_strlcpy(char *dst, const char *src, t_size size);
t_size		ft_strlcat(char *dst, const char *src, t_size size);

int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_strncmp(const char *s1, const char *s2, t_size n);
int			ft_memcmp(const void *s1, const void *s2, t_size n);
int			ft_atoi(char *str);

char		*ft_strrchr(const char *str, int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strnstr(const char *heystack, const char *needle, t_size size);

void		*ft_memchr(const void *s, int c, t_size n);
void		ft_bzero(void *s, t_usize len);
void		*ft_memset(void *s, int val, t_usize len);
void		*ft_memcpy(void *dest, const void *src, t_size n);
void		*ft_memmove(void *dest, const void *src, t_size n);
void		*ft_calloc(t_size nmemb, size_t size);
#endif
