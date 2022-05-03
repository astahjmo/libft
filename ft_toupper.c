/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*                                                                            */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:47:35 by johmatos          #+#    #+#             */
/*   Updated: 2022/05/03 00:23:17 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <malloc.h>

static int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_toupper(int c)
{
	c = (unsigned int) c;
	if (ft_islower(c))
		return (c & ~32);
	else
		return (c);
}
