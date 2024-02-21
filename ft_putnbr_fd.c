#include <unistd.h>
#include <stdio.h>


void ft_putnbr(int n, int fd)
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
		ft_putnbr(n / 10, fd);
	}
	result = '0' + n % 10;
	write(fd, &result, 1);
 }

int main() {
    int num = -12345;
    ft_putnbr(num, 1); // Assuming you want to print to stdout (file descriptor 1)
    return 0;
}
