/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:19:09 by johmatos          #+#    #+#             */
/*   Updated: 2022/05/24 20:19:12 by johmatos         ###   ########.fr       */
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
