#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p1 = s1;
	const unsigned char *p2 = s2;

	size_t i;
	
	i = 0;
	while(i < n)
	{
		if(p1[i] != p2[i]) 
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return 0;
}

#include <stdio.h>
int main() {
    char str1[] = "Hello";
    char str2[] = "Hella";
    size_t len = 5; // Length of the strings

    // Using memcmp
    int result1 = memcmp(str1, str2, len);
    printf("Using memcmp: Result = %d\n", result1);

    // Using ft_memcmp
    int result2 = ft_memcmp(str1, str2, len);
    printf("Using ft_memcmp: Result = %d\n", result2);

    return 0;
}
