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

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return ((char *)&str[0]);
	while (str[i] && to_find[j] && n--)
	{
		if (str[i] == to_find[j])
			j++;
		else
			j = 0;
		if (!to_find[j] && j != 0)
			return ((char *)&str[i - --j]);
		i++;
	}
	return (0);
}
