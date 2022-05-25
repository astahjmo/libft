/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:18:53 by johmatos          #+#    #+#             */
/*   Updated: 2022/05/24 18:03:00 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *s, char c)
{
	int	words;

	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			words++;
		while (*s && (*s != c))
			s++;
	}
	return (words);
}

static void	ft_alloc(char **str, char *s, int word, char c)
{
	int	i;
	int	j;
	int	start;
	int	end;

	i = 0;
	j = 0;
	while (i < word)
	{
		while (s[j] == c)
			j++;
		start = j;
		while (s[j] != c && s[j])
		{
			if (s[j + 1] == c || s[j + 1] == '\0')
				end = j;
			j++;
		}
		str[i] = ft_substr(&s[start], 0, (end - start + 1));
		i++;
	}
}

char	**ft_split(const char *s, char c)
{
	int		word;
	char	**str;

	if (!s && !(*s))
		return (NULL);
	word = ft_count(s, c);
	str = malloc(sizeof(char *) * (word + 1));
	if (!str)
		return (NULL);
	ft_alloc (str, (char *)s, word, c);
	str[word] = NULL;
	return (str);
}
