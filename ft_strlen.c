 #include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	return i;
}

#include <stdio.h> 
int main() {
    char str[] = "Hello, world!";

    // Using strlen
    size_t len1 = strlen(str);
    printf("Using strlen: Length = %zu\n", len1);

    // Using ft_strlen
    size_t len2 = ft_strlen(str);
    printf("Using ft_strlen: Length = %zu\n", len2);

    return 0;
}
