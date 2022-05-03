/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:25:07 by johmatos          #+#    #+#             */
/*   Updated: 2022/04/28 18:23:37 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	char	*str;

	str = (char *)src;
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	if (*str++ == c)
		return (str);
	return (0);
}
