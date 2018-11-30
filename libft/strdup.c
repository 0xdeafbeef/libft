#include <stdlib.h>

static size_t ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char    * ft_strdup (const char *src)
{
    int i;
    char *tmp;
	int l;

    l = ft_strlen(src);
	i =-1;
	tmp = (char*)malloc(l + 1);
	if(tmp == NULL)
		return tmp;
	while (++i < l)
		*(tmp + i) = *(src + i);
	*(tmp + i) = '\0';
	return (tmp);
}
