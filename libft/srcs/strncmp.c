/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhetting <qhetting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:06:34 by qhetting          #+#    #+#             */
/*   Updated: 2018/11/26 18:20:38 by qhetting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
		while (i < n && (*s1 ==*s2) && *s1)
		{
			s1++;
			s2++;
			i++;
		}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
