/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhetting <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:45:01 by qhetting          #+#    #+#             */
/*   Updated: 2018/11/21 19:02:17 by qhetting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int response;

	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	response = 1;
	while (i <= nb)
	{
		response *= i;
		i++;
	}
	return (response);
}
