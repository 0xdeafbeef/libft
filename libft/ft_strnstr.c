/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhetting <qhetting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:41:33 by qhetting          #+#    #+#             */
/*   Updated: 2018/12/02 17:42:05 by qhetting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	size_t needle_len;

	i = 0;
	if (0 == (needle_len = ft_strnlen(needle, len)))
		return (char *) haystack;
	while (i <= (int)(len -needle_len) && (*haystack))
	{
		if ((*haystack == *needle) && (0 == strncmp(haystack, needle,
				needle_len + 1 )))
			return (char *) haystack;
		haystack++;
		i++;
	}
	return (NULL);
}
int main()
{
	char *big = "abc";
	char *little = "abcdefghijklmnop";
	size_t max = strlen(big);
	char *s1 = strnstr(big, little, max);
	char *s2 = ft_strnstr(big, little, max);
	char *s3 = strstr(big, little);
	if (s1 == s2)
		ft_putstr("top");
}