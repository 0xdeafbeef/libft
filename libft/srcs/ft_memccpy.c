#include <string.h>
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	char *p1;
	char *p2;


	i = 0;
	p1 = (char*)dst;
	p2 = (char*)src;
	while (i < n)
	{
	*(p1 + i) = *(p2 + i);
	if (*(unsigned char*)(p2 + i) == (unsigned char)c)
		return ((char*)dst + i + 1);
		i++;
	}
	return (NULL);
}
