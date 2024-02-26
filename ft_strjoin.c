#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
		int i = 0;
		int j = 0;
		int h = 0;
		char *result;
	    int len_s1 = 0;
        while (s1[len_s1] != '\0')
	    {
        	len_s1++;
		}
        int len_s2 = 0;
    	while (s2[len_s2] != '\0')
		{
        	len_s2++;
		}

       	result = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	   	if (result == NULL)
       	{	 
       		return NULL;
		}
		while(s1[i] != '\0')
		{
				result[j] = s1[i];
				i++;
				j++;
		}
		while(s2[h] != '\0')
		{
				result[j] = s2[h];
				j++;
				h++;
		}
		result[j] = '\0';
		return(result);
}



