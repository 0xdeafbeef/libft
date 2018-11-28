/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhetting <qhetting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 19:36:01 by qhetting          #+#    #+#             */
/*   Updated: 2018/11/28 20:04:55 by qhetting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void * ft_memalloc(size_t size)
{
	char *ch;

	ch = NULL;
	ch = (char *)malloc(size);
	if (ch == NULL)
		return NULL;
	ft_bzero(ch, size);
	return (ch);
}

