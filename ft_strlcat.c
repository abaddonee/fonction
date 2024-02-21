#include <string.h>
#include <stdio.h>
size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	return i;
}

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	j=0;
	i=0;
	while(dst[i] != '\0' && i < dstsize)
	{
		i++;
	}
	while(src[j] != '\0' &&  i + j + 1 < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize - 1)
	{
        	dst[i + j] = '\0';
	}
	return(i + ft_strlen(src));
}


int main() {
    char dest[20] = "Hello, ";
    char src[] = "World!";
    size_t dstsize = sizeof(dest);

    // Using strlcat
    printf("Using strlcat:\n");
    printf("Before concatenation: dest = %s, src = %s\n", dest, src);
    size_t result_strlcat = strlcat(dest, src, dstsize);
    printf("After concatenation: dest = %s, src = %s, result = %zu\n", dest, src, result_strlcat);

    // Reset dest
    strcpy(dest, "Hello, ");

    // Using ft_strlcat
    printf("\nUsing ft_strlcat:\n");
    printf("Before concatenation: dest = %s, src = %s\n", dest, src);
    size_t result_ft_strlcat = ft_strlcat(dest, src, dstsize);
    printf("After concatenation: dest = %s, src = %s, result = %zu\n", dest, src, result_ft_strlcat);

    return 0;
}
