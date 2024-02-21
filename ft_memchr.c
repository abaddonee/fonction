#include <unistd.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *p = s;
    unsigned char ch = (unsigned char)c;
    size_t i;

    i = 0;
    while(i < n)
    {
        if (p[i] == ch)
        {
            return (void *)(p + i);
        }
	i++;
    }
    return NULL;
}

#include <stdio.h>
int main() {
    char str[] = "Hello, World!";
    char key = 'W';
    size_t len = strlen(str) + 1; // +1 to include the null terminator

    // Using memchr
    void *result1 = memchr(str, key, len);
    if (result1 != NULL) {
        printf("Using memchr: Found '%c' at position %ld\n", key, (char *)result1 - str);
    } else {
        printf("Using memchr: '%c' not found\n", key);
    }

    // Using ft_memchr
    void *result2 = ft_memchr(str, key, len);
    if (result2 != NULL) {
        printf("Using ft_memchr: Found '%c' at position %ld\n", key, (char *)result2 - str);
    } else {
        printf("Using ft_memchr: '%c' not found\n", key);
    }

    return 0;
}
