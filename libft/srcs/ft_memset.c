/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhetting <qhetting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:07:46 by qhetting          #+#    #+#             */
/*   Updated: 2018/12/02 17:08:46 by qhetting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr_handler;
	size_t	i;

	i = 0;
	ptr_handler = (char *)s;
	while (i < n)
	{
		*(ptr_handler + i++) = c;
	}
	return (s);
}
