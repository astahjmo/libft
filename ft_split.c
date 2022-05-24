/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:18:53 by johmatos          #+#    #+#             */
/*   Updated: 2022/05/24 22:08:36 by johmatos         ###   ########.fr       */
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
	int		j;
	int		index;
	char	*end;

	j = 0;
	index = 0;
	while (index < word)
	{
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			if ((s[j + 1]) == c || !(s[j + 1]))
				end = &s[j];
			j++;
		}
		str[index] = ft_substr(s, 0, (s - end));
		index++;
	}
}

char	**ft_split(const char *s, char c)
{
	int		word;
	char	**str;

	if (!s || !(*s))
		return (NULL);
	word = ft_count(s, c);
	str = malloc(sizeof(char *) * (word + 1));
	if (!str)
		return (NULL);
	ft_alloc (str, (char *)s, word, c);
	str[word] = NULL;
	return (str);
}

int	main(void)
{
	ft_split("lorem ipsum dolor sit amet,\
		consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
}
