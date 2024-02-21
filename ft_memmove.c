#include <unistd.h>
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


void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = len;
	char *d = (char *)dst;
	const char *s = (const char *)src;
	if(d > s && d < s + len)
	{
		while (i > 0)
		{
			d[i-1] = s[i-1];
			i--;
		}
	}
	else
		ft_memcpy(d, s, len);
	return(dst);
}

#include <stdio.h>

int main() 
{
    // Test data
    char src[] = "Hello, world!";
    char dest1[20];
    char dest2[20];

    // Using custom ft_memmove
    ft_memmove(dest1, src, strlen(src) + 1);

    // Using standard memmove
    memmove(dest2, src, strlen(src) + 1);

    // Comparing the results
    printf("Custom ft_memmove result: %s\n", dest1);
    printf("Standard memmove result: %s\n", dest2);

    return 0;
}
