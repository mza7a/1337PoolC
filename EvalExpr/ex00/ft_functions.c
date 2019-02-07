/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 14:16:46 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/27 21:25:15 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fun.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int number;

	if (nb < 0)
	{
		ft_putchar('-');
		number = nb * -1;
	}
	else
		number = nb;
	if (number >= 10)
		ft_putnbr(number / 10);
	ft_putchar(number % 10 + 48);
}

int		ft_atoi(char **str)
{
	int res;

	res = 0;
	while (**str >= '0' && **str <= '9')
	{
		res = res * 10 + **str - 48;
		(*str)++;
	}
	return (res);
}
