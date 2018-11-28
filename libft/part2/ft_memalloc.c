/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhetting <qhetting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 19:36:01 by qhetting          #+#    #+#             */
/*   Updated: 2018/11/27 19:36:37 by qhetting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void * ft_memalloc(size_t size)
{
	char *ch;
	char *ch_handler;
	ch = (char *)malloc(size);
	if (ch == NULL)
		return NULL;
	size ++;
	while (size--)
	{
		*ch = 0;
		ch++;
	}
	return (ch_handler);
}

