#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c)
{
	unsigned char ch = c;
	if(ch >= 'a' && ch <= 'z')
	{
			ch -= 32;
	}
	return(ch);
}


int main() 
{
    int test_char = 'b'; // Example test character

    printf("Using toupper:\n");
    int toupper_result = toupper(test_char);
    printf("Original character: %c, Converted character: %c\n", test_char, toupper_result);

    printf("\nUsing ft_toupper:\n");
    int ft_toupper_result = ft_toupper(test_char);
    printf("Original character: %c, Converted character: %c\n", test_char, ft_toupper_result);

    return 0;
}
