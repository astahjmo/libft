/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 03:02:41 by johmatos          #+#    #+#             */
/*   Updated: 2022/05/09 22:54:26 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, t_size size)
{
	char	*ft;
	int		lenght;

	lenght = ft_strlen(src);
	ft = dst;
	while (size-- != 0 && *dst != '\0')
	{
		dst++;
	}
	while (size-- != 0 && *src)
	{
		*dst = *src;
		src++;
		dst++;
	}
	dst = ft;
	*dst = '\0';
	return (size - lenght);
}
