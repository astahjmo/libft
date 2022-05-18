/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 06:22:01 by coder             #+#    #+#             */
/*   Updated: 2022/05/18 06:49:12 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		len;
	char	*new;

	len = ft_strlen(src);
	new = (char *) malloc(len * sizeof(char));
	if (new == NULL)
		return (NULL);
	ft_memcpy(new, src, len);
	return (new);
}
