/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 02:32:41 by johmatos          #+#    #+#             */
/*   Updated: 2022/04/27 01:20:56 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int val, t_usize len)
{
	t_usize	count;
	t_uchar	*ptr;

	ptr = dest;
	count = 0;
	while (count < len)
	{
		ptr[count] = val;
		count++;
	}
	return (dest);
}
