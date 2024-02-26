#include "libft.h" 
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


