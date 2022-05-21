/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 03:02:41 by johmatos          #+#    #+#             */
/*   Updated: 2022/05/20 14:57:35 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, t_size size)
{
	t_size	dstt;
	t_size	srcc;

	dstt = 0;
	srcc = 0;
	while (dst[dstt] && dstt < size)
		dstt++;
	while (src[srcc] && (dstt + srcc + 1) < size)
	{
		dst[dstt + srcc] = src[srcc];
		srcc++;
	}
	if (dstt != size)
		dst[dstt + srcc] = 0;
	return (dstt + ft_strlen(src));
}
