#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

char *ft_strdup(const char *s1)
{
	int i;
	char *dest;

	i = 0;
	dest = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (dest == NULL)
		return(NULL);
	while(s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int main() {
    const char *original = "Hello, world!";

    // Using strdup
    char *dup_standard = strdup(original);
    printf("Using strdup: %s\n", dup_standard);

    // Using ft_strdup
    char *dup_custom = ft_strdup(original);
    printf("Using ft_strdup: %s\n", dup_custom);

    // Freeing memory
    free(dup_standard);
    free(dup_custom);

    return 0;
}
