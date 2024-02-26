#include "libft.h" 

char *ft_substr(char const *s, unsigned int start, size_t len)
{
		size_t i = start;
		size_t j = 0;
		char *result;
		result = (char *)malloc((len + 1) * sizeof(char));
		if(result == NULL)
		{
				return NULL;
		}
		while(s[i] != '\0' && j < len)
		{
			result[j] = s[i];
			j++;
			i++;
		}
		result[j] = '\0';
		return(result);
}



