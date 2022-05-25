/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 00:23:34 by johmatos          #+#    #+#             */
/*   Updated: 2022/05/25 20:04:01 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define TRUE 1
# define FALSE 0
# include <stdlib.h>
# include <unistd.h>

//types
typedef unsigned int				t_usize;
typedef unsigned char				t_uchar;
typedef unsigned long int			t_size;
// Strings

t_size		ft_strlen(const char *str);
t_size		ft_strlcpy(char *dst, const char *src, t_size size);
t_size		ft_strlcat(char *dst, const char *src, t_size size);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);

int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_strncmp(const char *s1, const char *s2, t_size n);
int			ft_memcmp(const void *s1, const void *s2, t_size n);
int			ft_atoi(char *str);

char		*ft_strrchr(const char *str, int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strnstr(const char *heystack, const char *needle, t_size size);
char		*ft_strdup(char *src);
char		**ft_split(char const *s, char c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_itoa(int n);

void		*ft_memchr(const void *s, int c, t_size n);
void		*ft_memset(void *s, int val, t_usize len);
void		*ft_memcpy(void *dest, const void *src, t_size n);
void		*ft_memmove(void *dest, const void *src, t_size n);
void		*ft_calloc(t_size nmemb, size_t size);
void		ft_putchar_fd(char c, int fd);
void		ft_bzero(void *s, t_usize len);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

#endif
