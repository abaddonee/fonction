#include <string.h>

void* ft_memset(void *b, int c, size_t len)
{
	unsigned char *byte_ptr = b;
    	unsigned char byte_value = (unsigned char)c;

    	while (len != '\0') 
	{
        	*byte_ptr++ = byte_value;
		len--;
    	}	
	 return b;
}

#include <stdio.h>

int main() {
    // Test parameters
    char str[] = "Hello, World!";
    int c = 'X';
    size_t len = 5;

    // Using ft_memset
    printf("Using ft_memset:\n");
    printf("Before: %s\n", str);
    ft_memset(str, c, len);
    printf("After: %s\n", str);

    // Using memset from the standard library
    printf("\nUsing memset:\n");
    char str2[] = "Hello, World!";
    printf("Before: %s\n", str2);
    memset(str2, c, len);
    printf("After: %s\n", str2);

    return 0;
}
