#include <string.h>
#include <stdio.h>

int ft_strmncmp(const char *s1, const char *s2, size_t n)
{
	size_t i = 0;
	while(i < n  && s1[i] != '\0' && s2[i] != '\0'&& s1[i] == s2[i])
	{
		i++;
	}
	return(s1[i] - s2[i]);
}

int main() 
{
    const char *str1 = "hello";
    const char *str2 = "hello";

    printf("Using strncmp:\n");
    printf("Comparison result: %d\n", strncmp(str1, str2, 6)); // Compare the first 5 characters

    printf("\nUsing ft_strmncmp:\n");
    printf("Comparison result: %d\n", ft_strmncmp(str1, str2, 6)); // Compare the first 5 characters

    return 0;
}