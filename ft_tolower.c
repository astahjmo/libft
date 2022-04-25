/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*                                                                            */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:47:35 by johmatos          #+#    #+#             */
/*   Updated: 2022/04/23 18:09:04 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c)
{
	return (c >= 0x41 || c <= 0x5A);
}

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c - 'A' + 'a');
	else
		return (c);
}
