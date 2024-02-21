/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likiffel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:51:19 by likiffel          #+#    #+#             */
/*   Updated: 2024/02/19 14:53:59 by likiffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <bsd/string.h>
#include <stdio.h>


size_t ft_strlen(const char *s)
{
	size_t i;


	i = 0;
	while(s[i] != '\0')
 	{
		i++;
	}
	return i;
}


size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	
	i = 0;
	if(size == 0)
		return(0);
	while(src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ft_strlen(src);
}



int main() {
    char src[] = "Hello, world!";
    char dst1[20];
  

    // Copying using the provided strlcpy function
    size_t len1 = ft_strlcpy(dst1, src, 2);


    printf("Using provided strlcpy:\n");
    printf("Length: %zu, Destination: %s\n", len1, dst1);

    return 0;
}
