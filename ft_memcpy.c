#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	char *d = (char *)dst;
	const char *s = (const char *)src;

	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return(dst);
}

#include <stdio.h>
int main() {
    char src[] = "Hello, World!";
    char dest1[20];
    char dest2[20];
    size_t len = strlen(src) + 1;

    // Using memcpy
    memcpy(dest1, src, len);
    printf("Using memcpy: %s\n", dest1);

    // Using ft_memcpy
    ft_memcpy(dest2, src, len);
    printf("Using ft_memcpy: %s\n", dest2);

    return 0;
}
