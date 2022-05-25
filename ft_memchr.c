/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:52:37 by johmatos          #+#    #+#             */
/*   Updated: 2022/05/25 20:25:32 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned int		uc;

	str = (unsigned char *) s;
	uc = (unsigned char) c;
	while (n--)
	{
		if (*str == uc)
			return ((void *) str);
		str++;
	}
	return (0);
}
