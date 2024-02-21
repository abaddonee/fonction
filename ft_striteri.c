#include <stdio.h>


void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
		unsigned int i;

		i = 0;
		while(s[i] != '\0')
		{
				 f(i, &s[i]);
				 i++;
		}
}

void my_function(unsigned int index, char *c)
{
    // Exemple simple : Convertir chaque caractère en majuscule
    if (*c >= 'a' && *c <= 'z')
    {
        *c = *c - 32; // Convertir en majuscule
    }
}

int main()
{
    // Chaîne de caractères de test
    char str[] = "hello world";

    // Appel de la fonction ft_striteri
    ft_striteri(str, &my_function);

    // Affichage du résultat
    printf("Résultat : %s\n", str);

    return 0;
}

