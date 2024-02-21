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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void* ft_memset(void *b, int c, size_t len)
{
	unsigned char *byte_ptr = b;
	unsigned char byte_value = (unsigned char)c;
	while (len != '\0') 
	{
		*byte_ptr++ = byte_value;
		len--;
	} 
	return b;
}

void ft_bzero(void *s, size_t n) 
{
     ft_memset(s, 0, n);
}

void *ft_calloc(size_t nmemb, size_t size)
{
	void *result;
	result=(void *)malloc(nmemb * size);
	if(result == NULL)
		return(NULL);
	ft_bzero(result, nmemb * size);
	return(result);
}


int main() {
    int *arr1, *arr2;
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    // Utilisation de ft_calloc
    arr1 = (int *)ft_calloc(num_elements, element_size);
    if (arr1 == NULL) {
        printf("Allocation de mémoire avec ft_calloc a échoué\n");
        return 1;
    }

    // Utilisation de calloc
    arr2 = (int *)calloc(num_elements, element_size);
    if (arr2 == NULL) {
        printf("Allocation de mémoire avec calloc a échoué\n");
        return 1;
    }

    // Comparaison des deux allocations de mémoire
    printf("Allocation de mémoire avec ft_calloc:\n");
    for (size_t i = 0; i < num_elements; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Allocation de mémoire avec calloc:\n");
    for (size_t i = 0; i < num_elements; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Libération de la mémoire
    free(arr1);
    free(arr2);

    return 0;
}
