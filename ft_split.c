/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likiffel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 21:31:08 by likiffel          #+#    #+#             */
/*   Updated: 2024/03/05 21:13:59 by likiffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	nbr_wrd(char const *s, char c)
{
	size_t	wrd;
	size_t	i;

	wrd = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			wrd++;
		}
		i++;
	}
	return (wrd);
}

static void	filling_tb(char *newtb, char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		newtb[i] = s[i];
		i++;
	}
	newtb[i] = '\0';
}

static void	mem_alloc(char **result, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	counting;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		counting = 0;
		while (s[j] != '\0' && s[j] != c)
		{
			counting++;
			j++;
		}
		if (counting > 0)
		{
			result[i] = malloc((counting + 1) * sizeof(char));
			filling_tb(result[i], (s + j - counting), c);
			i++;
		}
		if (s[j] != '\0')
			j++;
	}
	result[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**result;

	words = nbr_wrd(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	mem_alloc(result, s, c);
	return (result);
}
