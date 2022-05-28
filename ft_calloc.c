/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:19:09 by johmatos          #+#    #+#             */
/*   Updated: 2022/05/28 14:24:27 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t memory, size_t size)
{
	void	*ptr;

	if ((memory * size) / memory != size)
		return (NULL);
	ptr = malloc(memory * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, memory * size);
	return (ptr);
}
