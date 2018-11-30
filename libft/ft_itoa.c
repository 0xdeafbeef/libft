/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrameau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 02:04:57 by jrameau           #+#    #+#             */
/*   Updated: 2016/09/28 02:04:59 by jrameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <printf.h>
#include <limits.h>

static int ft_intlen(int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return i;
}

int check_and_init(int *n, char **ret)
{
	int isnegative;

	isnegative = 0;
	if ((*n) > 0)
	{
		(*ret) = ft_strnew(ft_intlen((*n)));
		isnegative = 0;
	} else if ((*n) < 0)
	{
		(*ret) = ft_strnew(ft_intlen((*n)) + 1);
		*(*ret) = '-';
		(*n) *= -1;
		isnegative = 1;
	}
	return isnegative;
}

char *ft_itoa(int n)
{
	int isnegative;
	char *ret;

	isnegative = check_and_init(&n, &ret);
	if (n == -2147483648 || n == 0)
		return (n == -2147483648 ? ft_strdup("-2147483648") : ft_strdup("0"));
	ret += ft_intlen(n);
	while (n)
	{
		*ret = (char) ((n % 10) + '0');
		n /= 10;
		ret--;
	}
	if (isnegative)
		return (ret);
	else
		return ++ret;
}

int main()
{

//	printf("%s\n", ft_itoa(1));
//
//	printf("%s\n", ft_itoa(-1));
//	printf("%s\n", ft_itoa(-1488));
//	printf("%s\n", ft_itoa(1488));
//	printf("%s\n", ft_itoa(0));
	printf("%i", INT_MIN);
	printf("%s\n", ft_itoa(INT_MIN));
	printf("%s\n", ft_itoa(INT_MAX));

}