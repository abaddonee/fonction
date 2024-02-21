#include <ctype.h>
#include <stdio.h>

int ft_isalpha(int c)
{
		char ch = c;
		if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		{
				return(1);
		}
		return(0);
}

int main() {
    char test_char = '4';

    printf("Using isalpha:\n");
    if (isalpha(test_char)) {
        printf("%c is an alphabetic character.\n", test_char);
    } else {
        printf("%c is not an alphabetic character.\n", test_char);
    }

    printf("\nUsing ft_isalpha:\n");
    if (ft_isalpha(test_char)) {
        printf("%c is an alphabetic character.\n", test_char);
    } else {
        printf("%c is not an alphabetic character.\n", test_char);
    }

    return 0;
}
