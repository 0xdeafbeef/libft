#include <printf.h>
#include <stdlib.h>
#include "libft.h"

int ft_count_delimited_words(const char *string, char delimiter)
{
	int word_counter;

	word_counter = 0;
	if (string)
	{
		while (*string)
		{
			while (*string != delimiter)
				string++;
			while (*string == delimiter)
				string++;
			word_counter++;
		}
		return (word_counter);
	}
	return (0);
}

int word_len(const char *string, char delim)
{
	const char *temp;

	temp = string;
	while (*string != delim)
		string++;
	return ((int) string - (int) temp);
}

static const char *get_string(const char *s, char *temp, int *i)
{
	*temp = *s;
	temp++;
	s++;
	i++;
	return s;
}

char **ft_strsplit(char const *s, char c)
{
	int i;
	char *temp;
	char *tmp_hand;
	char **str2;

	if (!s || !(str2 = (char **) malloc(sizeof(*str2) *
										(ft_count_delimited_words(s, c) + 1))))
		return (NULL);
	i = -1;
	while (*s)
	{
		temp = ft_strnew((size_t) word_len(s, c));
		tmp_hand = temp;
		if (temp)
			while (*s != c)
				temp = get_string(s, temp, &i);
		str2[i] = tmp_hand;
		
	}
}

int main()
{
	printf("%i", ft_count_delimited_words("aa aa aa aa aaaaa aa a a a", ' '));
}