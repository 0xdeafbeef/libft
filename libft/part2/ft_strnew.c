
#include <stdlib.h>

char * ft_strnew(size_t size)
{
	char *ch;
	char *ch_handler;
	ch = (char *)malloc(size + 1);
	if (ch == NULL)
		return NULL;
	size += 2;
	while (size--)
	{
		*ch = '\0';
		ch++;
	}
	return (ch_handler);
}
