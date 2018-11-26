#include <string.h>
#include "libft.h"

 char	*ft_strchr(const char *s, int c)
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
