/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likiffel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 21:31:08 by likiffel          #+#    #+#             */
/*   Updated: 2024/03/03 21:49:13 by likiffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_free_split(char **split)
{
	int	i;

	i = 0;
	if (split)
	{
		while (split[i])
		{
			free(split[i]);
			i++;
		}
		free (split);
	}
}

static int	nw(char const *s, char c)
{
	int	i;
	int	nbr_words;

	i = 0;
	nbr_words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			nbr_words++;
		}
		i++;
	}
	return (nbr_words);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		h;
	int		j;
	int		i;
	int		start;

	j = 0;
	i = 0;
	start = 0;
	result = (char **)malloc((nw(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (s[i] != '\0' && j < nw(s, c))
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		result[j] = (char *)malloc((i - start + 1) * sizeof(char));
		if (result[j] == NULL)
		{
			ft_free_split (result);
			return (NULL);
		}
		h = 0;
		while (start < i)
		{
			result[j][h] = s[start];
			h++;
			start++;
		}
		result[j][h] = '\0';
		j++;
	}
	result[j] = NULL;
	return (result);
}
