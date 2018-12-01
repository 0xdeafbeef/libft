#include "string.h"

#include <libft.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len;
    size_t src_len;
    size_t index;
    char *tempo;

    src_len = ft_strlen(src);
    index = 0;
    dst_len = ft_strlen(dst);
    if (size < dst_len + 1)
        return (size + src_len);
    tempo = dst;
    while (*dst)
        dst++;
    size -= dst_len;
    while (size > 1 && *src)
    {
        *dst = *src;
        dst++;
        src++;
        size--;
    }
    *dst = '\0';
    dst = tempo;
    return (dst_len + src_len);
}