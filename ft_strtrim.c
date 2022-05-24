/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:16:13 by johmatos          #+#    #+#             */
/*   Updated: 2022/05/22 23:20:49 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		strlen;
	char	*new_str;

	if (!(s1 || set))
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	strlen = ft_strlen(s1);
	while (ft_strchr(set, s1[strlen - 1]))
	{
		if (!(strlen))
			break ;
		strlen--;
	}
	new_str = ft_substr(s1, 0, strlen);
	return (new_str);
}
