#include "libft.h"

int ft_atoi(const char *str)
{
	int signe = 0;
	int i = 0;
	int n = 0;
	while(str[i] == ' ' || (str[i] > 9 && str[i] < 13))
	{
		i++;
	}
	if(str[i] == '-')
	{
		signe = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' ) 
	{
		n = n * 10 + str[i] - '0'; 
		i++; 
	}
	if(signe == 1)
	{
			return(-n);
	}
	return(n);
}
	

