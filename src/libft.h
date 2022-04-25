/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 01:50:53 by johmatos          #+#    #+#             */
/*   Updated: 2022/04/23 21:53:43 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define TRUE 1
# define FALSE 0

//types
typedef unsigned long int			t_usize;
typedef unsigned long long			t_size;
typedef unsigned char				t_uchar;
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
void		ft_bzero(void *s, t_usize len);
void		*ft_memset(void *s, int val, t_usize len);
void		*ft_memcpy(void *dest, const void *src, t_size n);
void		*ft_memmove(void *dest, const void *src, t_size n);
char		*strrch(const char *str, int c);
char		*strchr(const char *s, int c);
#endif
