#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
	char *ptr_handler;

	size_t i = 0;
	ptr_handler = (char *)s;
	while (i < n)
	{
		*(ptr_handler+ i++) = c;
	}
	return (s);
}
