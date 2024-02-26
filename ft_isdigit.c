#include "libft.h"
int ft_isdigit(int c)
{
		char ch = c;
		if(ch >= '0' && ch <= '9')
		{
				return(1);
		}
		return(0);
}



