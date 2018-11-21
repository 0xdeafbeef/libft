/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhetting <qhetting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:45:01 by qhetting          #+#    #+#             */
/*   Updated: 2018/11/21 13:45:12 by qhetting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	if (nb >= 2)
	{
		i = 0;
		f = nb;
		while (++i < nb)
			f = f * (nb - i);
		return (f);
	}
	else
		return (1);
}
