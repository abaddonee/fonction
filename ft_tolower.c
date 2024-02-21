#include <ctype.h>
#include <stdio.h>

int ft_tolower(int c)
{
	unsigned char ch = c;
	if(ch >= 'A' && ch <= 'Z')
	{
			ch += 32;
	}
	return(ch);
}


int main() {
    int test_char = 'B'; // Example test character

    printf("Using tolower:\n");
    int tolower_result = tolower(test_char);
    printf("Original character: %c, Converted character: %c\n", test_char, tolower_result);

    printf("\nUsing ft_tolower:\n");
    int ft_tolower_result = ft_tolower(test_char);
    printf("Original character: %c, Converted character: %c\n", test_char, ft_tolower_result);

    return 0;
}
