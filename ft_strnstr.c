#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i = 0;
	int j;

	if(needle[0] == '\0')
	{
		return (char *)haystack;
	}
	while (haystack[i] != '\0')
	{
		j = 0;
		while(j < len && haystack[i+j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}
		if(needle[j] == '\0')
		{
			return(char *)&haystack[i];
		}
		i++;
	}
	return NULL;
}



int main() {
    const char haystack[] = "";
    const char needle[] = "hello";
    size_t len = strlen(haystack);

    // Using the standard strnstr function
    char *result_strnstr = strnstr(haystack, needle, len);
    printf("Using strnstr:\n");
    if (result_strnstr != NULL) {
        printf("Substring \"%s\" found at position: %ld\n", needle, result_strnstr - haystack);
    } else {
        printf("Substring \"%s\" not found.\n", needle);
    }

    // Using your ft_strnstr function
    char *result_ft_strnstr = ft_strnstr(haystack, needle, len);
    printf("\nUsing ft_strnstr:\n");
    if (result_ft_strnstr != NULL) {
        printf("Substring \"%s\" found at position: %ld\n", needle, result_ft_strnstr - haystack);
    } else {
        printf("Substring \"%s\" not found.\n", needle);
    }

    return 0;
}
