#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	const char *lastc = NULL;
	char ch = (char)c;
	int i = 0;

	while(s[i] != '\0')
	{
		if (s[i] == ch)
		{
			lastc = &s[i];
		}
		i++;
	}
	if(ch == '\0')
	{
		return (char *)(s + i - 1);
	}
	return (char *)lastc;
}


