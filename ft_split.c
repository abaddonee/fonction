#include "libft.h" 
static void ft_free_split(char **split)
{
    if (split)
    {
        int i = 0;
        while (split[i])
        {
            free(split[i]);
            i++;
        }
        free(split);
    }
}


static int		ft_nbr_of_words(char const *s, char c)
{
		int i = 0;
		int nbr_words = 0;

		while(s[i] != '\0')
		{
				if(s[i] != c && (i == 0 || s[i - 1] == c))
				{
						nbr_words++;
				}
				i++;
		}
		return(nbr_words);
}


char	**ft_split(char const *s, char c)
{
		char **result;
		int h;
		int j = 0;
		int i = 0;
		int nbr_wrds = 0;
		int start = 0;

		nbr_wrds = ft_nbr_of_words(s, c);
		result=(char **)malloc((nbr_wrds + 1) * sizeof(char *));
		if(result == NULL)
		{
				return(NULL);
		}

		while(s[i] != '\0' && j < nbr_wrds)
		{

				while(s[i] != '\0' && s[i] == c)
				{
						i++;
				}
				start = i;

				while(s[i] != '\0' && s[i] != c)
				{
						i++;
				}

				result[j]=(char *)malloc((i - start + 1) * sizeof(char));
				if(result[j] == NULL)
				{
						ft_free_split(result);
						return(NULL);
				}
					
				h = 0;
				while(start < i)
				{
						result[j][h] = s[start];
						h++;
						start++;
				}
				result[j][h] = '\0';
				j++;
		}
		result[j] = NULL;
		return(result);
}








