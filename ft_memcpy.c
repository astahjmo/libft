/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 03:20:41 by johmatos          #+#    #+#             */
/*   Updated: 2022/04/12 22:28:33 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, t_size n)
{
	t_size			count;
	t_uchar			*d;
	const t_uchar	*s;

	d = dest;
	s = src;
	count = -1;
	while (++count <= n)
		d[count] = s[count];
	return (dest);
}
