#include <string.h>
#include <stdio.h>
char *ft_strchr(const char *s, int c)
{
	int i;
	i = 0;

	while(s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return (char *)(s + i);
		}
		i++;
	}

	return (NULL);
}


int main() {
    const char str[] = "Hello, World!";
    int ch = 'o';

    // Using strchr
    printf("Using strchr:\n");
    char *result_strchr = strchr(str, ch);
    if (result_strchr != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, result_strchr - str);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    // Using ft_strchr
    printf("\nUsing ft_strchr:\n");
    char *result_ft_strchr = ft_strchr(str, ch);
    if (result_ft_strchr != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, result_ft_strchr - str);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}

