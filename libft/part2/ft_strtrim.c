#include <printf.h>
#include "libft.h"

int wordlen(const char *s, int *i, int *j)
{
	*i = 0;
	while (s[*i] == '\n' || s[*i] == '\t' || s[*i] == ' ')
		(*i)++;
	*j = (int) ft_strlen(s) - 1;
	while (s[*j] == '\n' || s[*j] == '\t' || s[*j] == ' ')
		(*j)--;
	if ((*j - *i + 1) >0)
		return (*j - *i + 1);
	else
		return (-1);
}

char *ft_strtrim(char const *s)
{
	char *word;
	char *hand;
	int i;
	int j;
	size_t k;

	if (wordlen(s, &i, &j) == -1)
		return ("");
	word = ft_strnew((size_t) wordlen(s, &i, &j));

	if (word)
	{
		hand = word;

		k = (size_t) s;
		s += i;
		while ((size_t) s < (k + j) + 1)
		{
			*word = *s;
			word++;
			s++;
		}
		return (hand);
	} else
		return (NULL);
}

int main()
{
	printf("%s", ft_strtrim("   \t  \n\n \t\t  \n\n\n\n   \n \n \t\t\n  "));

}