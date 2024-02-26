#include "libft.h"

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


