#include "libft.h" 
void ft_putnbr_fd(int n, int fd)
{		
	char result = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);  		
		return;
	}
	if (n < 0)
	{
		write(fd, "-", 1); 
		n = -n; 
	}
	if (n >= 10) 
	{
		ft_putnbr_fd(n / 10, fd);
	}
	result = '0' + n % 10;
	write(fd, &result, 1);
 }


