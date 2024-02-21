#include <ctype.h>
#include <stdio.h>

int ft_isdigit(int c)
{
		char ch = c;
		if(ch >= '0' && ch <= '9')
		{
				return(1);
		}
		return(0);
}


int main() {
    char test_char = '5';

    printf("Using isdigit:\n");
    if (isdigit(test_char)) {
        printf("%c is a digit.\n", test_char);
    } else {
        printf("%c is not a digit.\n", test_char);
    }

    printf("\nUsing ft_isdigit:\n");
    if (ft_isdigit(test_char)) {
        printf("%c is a digit.\n", test_char);
    } else {
        printf("%c is not a digit.\n", test_char);
    }

    return 0;
}
