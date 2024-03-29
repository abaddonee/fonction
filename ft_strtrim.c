/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likiffel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 22:26:51 by likiffel          #+#    #+#             */
/*   Updated: 2024/03/03 22:35:02 by likiffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	inset(char const character, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (character == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static size_t	start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (inset(s1[i], set) == 0)
		{
			break ;
		}
		i++;
	}
	return (i);
}

static size_t	end(char const *s1, char const *set, size_t i)
{
	while (i > 0)
	{
		i--;
		if (inset(s1[i], set) == 0)
			break ;
	}
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	length;
	size_t	i;
	size_t	j;

	i = 0;
	length = ft_strlen(s1);
	i = start(s1, set);
	if (i != length)
		length = end(s1, set, length);
	result = (char *)malloc(sizeof(char) * ((length - i) + 1));
	if (result == NULL)
		return (NULL);
	j = 0;
	while (i < length)
	{
		result[j] = s1[i];
		j++;
		i++;
	}
	result[j] = '\0';
	return (result);
}
