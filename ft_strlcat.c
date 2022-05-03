/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 03:40:17 by johmatos          #+#    #+#             */
/*   Updated: 2022/05/03 01:26:01 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_size ft_strlcat(char *dst, const char *src, t_size size)
{
	char *d = dst;
	const char *s = src;
	t_size n = size;
	t_size  dlen;

	d++;
	while (n-- != 0 && *d != '\0')
	dlen = d - dst;
	n = size - dlen;

	if (n == 0)
		return(dlen + ft_strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return(dlen + (s - src));
}
