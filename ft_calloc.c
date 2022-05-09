/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 04:02:14 by johmatos          #+#    #+#             */
/*   Updated: 2022/05/06 20:34:14 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(t_size memory, t_size size)
{
	void	*ptr;

	if (size == 0 || memory == 0)
		return (NULL);
	ptr = malloc(memory * size);
	if (ptr)
		ft_bzero(ptr, memory * size);
	return (ptr);
}
