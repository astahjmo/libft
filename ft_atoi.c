/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 05:11:48 by johmatos          #+#    #+#             */
/*   Updated: 2022/05/06 17:51:35 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	is_negative;
	int	number;

	is_negative = 1;
	number = 0;
	while ((*str) && (*str >= 0 && *str <= 32) && !(*str == '\e'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			is_negative *= -1;
		}
		str++;
	}
	while ((*str) && (ft_isdigit(*str)))
	{
		number = number * 10 + (*str) - '0';
		str++;
	}
	return (number * is_negative);
}
