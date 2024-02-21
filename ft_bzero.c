#include <unistd.h>
#include <strings.h>

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


void ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);		
}

#include <stdio.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    size_t len = 5;

    // Using bzero
    printf("Using bzero:\n");
    printf("Before: %s\n", str1);
    bzero(str1, len);
    printf("After: %s\n", str1);

    // Using ft_bzero
    printf("\nUsing ft_bzero:\n");
    printf("Before: %s\n", str2);
    ft_bzero(str2, len);
    printf("After: %s\n", str2);

    return 0;
}
