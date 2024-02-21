#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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


int main() {
    const char *s1 = "Hello, ";
    const char *s2 = "World!";
    char *joined_str;

    joined_str = ft_strjoin(s1, s2);
    if (joined_str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Joined string: %s\n", joined_str);

    // Remember to free the memory allocated for the joined string
    free(joined_str);

    return 0;
}
