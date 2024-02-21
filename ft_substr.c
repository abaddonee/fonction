#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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


int main() 
{
    const char *s = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    char *sub = ft_substr(s, start, len);
    if (sub == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Substring: %s\n", sub);

    // Remember to free the allocated memory
    free(sub);

    return 0;
}
