/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 03:40:17 by johmatos          #+#    #+#             */
/*   Updated: 2022/04/15 19:43:20 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, t_size size)
{
	t_size	n;
	char	*d_index;

	d_index = dst;
	n = size;
	while (*(++d_index))
		n--;
	n = size - (ft_strlen(dst));
	if (n == 0)
		return ((ft_strlen(dst)) + ft_strlen(src));
	while (*src)
	{
		if (n != 1)
		{
			*d_index = *src;
			n--;
		}
		d_index++;
		src++;
	}
	*d_index = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
