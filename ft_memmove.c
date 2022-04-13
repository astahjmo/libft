/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:12:26 by johmatos          #+#    #+#             */
/*   Updated: 2022/04/12 23:11:32 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, t_size n)
{
	char		*c_dest;
	const char	*c_src;

	c_dest = dest;
	c_src = src;
	if (c_dest < c_src)
		return (ft_memcpy(c_dest, c_src, n));
	else
	{
		while (n--)
			c_dest[n] = c_src[n];
	}
	return (dest);
}
