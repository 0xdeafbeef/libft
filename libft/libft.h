#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>

int		ft_toupper(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isprint(int ch);
int		ft_isdigit(int ch);
int		ft_isalnum(int c);
int 	ft_atoi(const char *str);
int		ft_tolower(int c);
size_t 	ft_strlen(const char *str);
int 	ft_isascii(int c);
void	ft_bzero(void *s, size_t n);
char	*ft_strdup (const char *src);
#endif
