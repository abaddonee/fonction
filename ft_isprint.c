#include <ctype.h>
#include <stdio.h>
int ft_isprint(int c) 
{
    if (c >= 32 && c <= 126) 
	{
        return 1;
    }
    return 0;
}

int main() {
    int test_char = 170; // Example test character

    printf("Using isprint:\n");
    if (isprint(test_char)) {
        printf("%d is a printable character.\n", test_char);
    } else {
        printf("%d is not a printable character.\n", test_char);
    }

    printf("\nUsing ft_isprint:\n");
    if (ft_isprint(test_char)) {
        printf("%d is a printable character.\n", test_char);
    } else {
        printf("%d is not a printable character.\n", test_char);
    }

    return 0;
}
