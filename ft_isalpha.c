#include "libft.h"
int ft_isalpha(int c)
{
		char ch = c;
		if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		{
				return(1);
		}
		return(0);
}


