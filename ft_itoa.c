#include <stdlib.h>
#include <stdio.h>
#include <string.h>


static int ft_nlen(int n)
{
		int len = 1;
		int signe = 0;
		if(n < 0)
		{
				signe = 1;
				n *= -1;
		}
		while(n /= 10)
		{
				len++;
		}
		return(len + signe);
}




char *ft_itoa(int n)
{
		char *result;
		int size = ft_nlen(n);
		int i;

		result=(char *)malloc((size + 1) * sizeof(char));
		if(result == NULL)
		{
				return(NULL);
		}

		if(n < 0)
		{
				result[0] = '-';
				n *= -1;
		}
		if(n == 0)
		{
				result[0] = '0';
		}
		
		i = size - 1;
		while(n > 0)
		{
				result[i] = (n % 10) + '0';
				n /= 10;
				i--;
		}
		result[size] = '\0';
		return(result);
}




int main() {
    int number = -12345;
    char *str_number = ft_itoa(number);

    if (str_number == NULL) {
        printf("Erreur lors de l'allocation de mémoire.\n");
        return 1;
    }

    printf("Entier : %d\n", number);
    printf("Chaîne de caractères : %s\n", str_number);

    // Libération de la mémoire allouée dynamiquement
    free(str_number);

    return 0;
}
		
