#include "libft.h" 


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
		if(s == NULL || f == NULL)
		{
				return(NULL);
		}
		unsigned int length = ft_strlen(s);
		unsigned int i = 0;
		char *result;
		result=(char *)malloc((length + 1) * sizeof(char));
		if(result == NULL)
		{
				return(NULL);
		}
		while(i < length)
		{
				result[i] = f(i, s[i]);
				i++;
		}
		result[i] = '\0';
		return(result);
}


