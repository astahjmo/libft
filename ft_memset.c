/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 02:32:41 by johmatos          #+#    #+#             */
/*   Updated: 2022/05/25 20:36:27 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int val, size_t len)
{
	size_t			count;
	unsigned char	*ptr;

	ptr = (unsigned char *)dest;
	count = 0;
	while (count < len)
	{
		ptr[count] = val;
		count++;
	}
	return (dest);
}
