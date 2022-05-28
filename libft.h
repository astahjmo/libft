/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 00:23:34 by johmatos          #+#    #+#             */
/*   Updated: 2022/05/28 12:43:46 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

// Memory
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nb, size_t size);
void	*ft_memchr(const void *str, int c, unsigned int n);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
void	*ft_memmove(void *str1, void *str2, unsigned int n);
void	*ft_memset(void *str, int c, unsigned int n);

//utils

int		ft_memcmp(const void *str1, const void *str2, size_t n);
int		ft_atoi(const char *str);
int		ft_isalnum(int n);
int		ft_isalpha(int n);
int		ft_isdigit(int n);
int		ft_isprint(int n);
int		ft_isascii(int n);
int		ft_strncmp(const char *str1, const char *str2, unsigned int n);
int		ft_tolower(int c);
int		ft_toupper(int c);
// STR

char	*ft_strchr(const char *str, int find);
char	*ft_strdup(const char *src);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strnstr(const char *str, const char *find, size_t size);
char	*ft_strrchr(const char *str, int find);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(const char *s, char c);
char	*ft_itoa(int n);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dest, const char *str, size_t size);
size_t	ft_strlcpy(char *dest, const char *str, size_t size);

// FD

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
#endif
