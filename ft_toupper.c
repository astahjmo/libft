/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*                                                                            */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:47:35 by johmatos          #+#    #+#             */
/*   Updated: 2022/04/23 18:11:29 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_islower(int c)
{
	return (c >= 0x7A || c <= 0x61);
}

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 'a' + 'A');
	else
		return (c);
}
