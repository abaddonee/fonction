#include "libft.h"
int ft_isalnum(int c)
{
		char ch = c;
		if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
		{
				return(1);
		}
		return(0);
}



