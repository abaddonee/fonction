#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	return i;
}


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
		if(s == NULL || f == NULL)
		{
				return(NULL);
		}
		unsigned int length = ft_strlen(s);
		unsigned int i = 0;
		char *result;
		result=(char *)malloc((length + 1) * sizeof(char));
		if(result == NULL)
		{
				return(NULL);
		}
		while(i < length)
		{
				result[i] = f(i, s[i]);
				i++;
		}
		result[i] = '\0';
		return(result);
}

char my_function(unsigned int index, char c)
{
    // Exemple simple : Convertir chaque caractère en majuscule
    if (c >= 'a' && c <= 'z')
    {
        return c - 32; // Convertir en majuscule
    }
    else
    {
        return c; // Ne rien changer pour les autres caractères
    }
}

int main()
{
    // Chaîne de caractères de test
    const char *input = "Hello, World!";

    // Appel de la fonction ft_strmapi
    char *result = ft_strmapi(input, &my_function);

    if (result != NULL)
    {
        // Affichage du résultat
        printf("Résultat : %s\n", result);

        // Libération de la mémoire allouée dynamiquement
        free(result);
    }
    else
    {
        printf("Allocation mémoire échouée.\n");
    }

    return 0;
}

