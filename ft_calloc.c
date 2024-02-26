/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likiffel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:02:43 by likiffel          #+#    #+#             */
/*   Updated: 2024/02/19 15:38:11 by likiffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *ft_calloc(size_t nmemb, size_t size)
{
	void *result;
	result=(void *)malloc(nmemb * size);
	if(result == NULL)
		return(NULL);
	ft_bzero(result, nmemb * size);
	return(result);
}



