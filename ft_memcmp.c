#include "libft.h" 
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p1 = s1;
	const unsigned char *p2 = s2;

	size_t i;
	
	i = 0;
	while(i < n)
	{
		if(p1[i] != p2[i]) 
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return 0;
}


