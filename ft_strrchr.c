/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:25:07 by johmatos          #+#    #+#             */
/*   Updated: 2022/04/28 18:42:36 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int		len;

	len = ft_strlen(src);
	while (len >= 0)
	{
		if (src[len] == c)
			return ((char *) &src[len]);
		len--;
	}
	return (0);
}
