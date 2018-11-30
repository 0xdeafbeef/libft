#include <printf.h>

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

char **ft_strsplit(char const *s, char c)
{
	int word_count;

	word_count = ft_count_delimited_words(s, c);

}

int main()
{
	printf("%i", ft_count_delimited_words("aa aa aa aa aaaaa aa a a a", ' '));
}