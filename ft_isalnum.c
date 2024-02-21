#include <ctype.h>
#include <stdio.h>

int ft_isalnum(int c)
{
		char ch = c;
		if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
		{
				return(1);
		}
		return(0);
}


int main() {
    char test_char = '5';

    printf("Using isalnum:\n");
    if (isalnum(test_char)) {
        printf("%c is alphanumeric.\n", test_char);
    } else {
        printf("%c is not alphanumeric.\n", test_char);
    }

    printf("\nUsing ft_isalnum:\n");
    if (ft_isalnum(test_char)) {
        printf("%c is alphanumeric.\n", test_char);
    } else {
        printf("%c is not alphanumeric.\n", test_char);
    }

    return 0;
}
