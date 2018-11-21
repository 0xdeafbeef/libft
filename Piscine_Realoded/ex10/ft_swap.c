/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   : ft_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhetting <qhetting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:46:24 by qhetting          #+#    #+#             */
/*   Updated: 2018/11/21 13:46:30 by qhetting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	x = *a;

	*a = *b;
	*b = x;
}
