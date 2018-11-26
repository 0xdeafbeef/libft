#include <stdlib.h>
static char *checker(char c, const char *ptr)
{
	if ((char)c == '\0')
	{
		while (*(ptr + i))
			i++;
		return (ptr + i);
	}
}
char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	char *ptr;

	ptr = ft_strdup(s);
	 i = 0;

	if ((char)c == '\0')
	{
		while (*(ptr + i))
			i++;
		return (ptr + i);
	}
	while (*(s + i))
	{
		if (*(ptr + i) == (char)c)
			return ((ptr + i));
		i++;
	}
	return (NULL);
 }
