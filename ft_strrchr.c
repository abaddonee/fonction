#include <string.h>
#include <stdio.h>
char *ft_strrchr(const char *s, int c)
{
	const char *lastc = NULL;
	char ch = (char)c;
	int i = 0;

	while(s[i] != '\0')
	{
		if (s[i] == ch)
		{
			lastc = &s[i];
		}
		i++;
	}
	if(ch == '\0')
	{
		return (char *)(s + i - 1);
	}
	return (char *)lastc;
}

int main() {
    const char str[] = "Hello, World!";
    int ch = 'o';

    // Utilisation de la fonction strrchr de la bibliothèque standard
    printf("Utilisation de la fonction strrchr :\n");
    char *result_strrchr = strrchr(str, ch);
    if (result_strrchr != NULL) {
        printf("Dernière occurrence du caractère '%c' à la position : %ld\n", ch, result_strrchr - str);
    } else {
        printf("Le caractère '%c' n'a pas été trouvé dans la chaîne.\n", ch);
    }

    // Utilisation de votre fonction ft_strrchr
    printf("\nUtilisation de votre fonction ft_strrchr :\n");
    char *result_ft_strrchr = ft_strrchr(str, ch);
    if (result_ft_strrchr != NULL) {
        printf("Dernière occurrence du caractère '%c' à la position : %ld\n", ch, result_ft_strrchr - str);
    } else {
        printf("Le caractère '%c' n'a pas été trouvé dans la chaîne.\n", ch);
    }

    return 0;
}

