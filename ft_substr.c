/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:45:03 by johmatos          #+#    #+#             */
/*   Updated: 2022/05/20 00:27:46 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		str_len;

	str_len = ft_strlen(s);
	substr = (char *)ft_calloc(sizeof(char), len + 1);
	if (substr == NULL)
		return (NULL);
	if (start < str_len)
		ft_strlcpy(substr, s + start, len + 1);
	if (start >= str_len)
		substr = ft_strdup("");
	return (substr);
}
