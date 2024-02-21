#include <ctype.h>
#include <stdio.h>

int ft_isascii(int c)
{
		if(c >= 0 && c <= 127)
		{
				return(1);
		}
		return(0);
}


int main() {
    int test_char = 56; // Example test character

    printf("Using isascii:\n");
    if (isascii(test_char)) {
        printf("%d is an ASCII character.\n", test_char);
    } else {
        printf("%d is not an ASCII character.\n", test_char);
    }

    printf("\nUsing ft_isascii:\n");
    if (ft_isascii(test_char)) {
        printf("%d is an ASCII character.\n", test_char);
    } else {
        printf("%d is not an ASCII character.\n", test_char);
    }

    return 0;
}
