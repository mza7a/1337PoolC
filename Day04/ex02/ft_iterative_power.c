/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 08:35:29 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/14 09:45:18 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int x;
	int y;

	x = power;
	y = 1;
	if (x == 0)
		return (1);
	if (x < 0)
		return (0);
	if (x > 0)
	{
		while (x >= 1)
		{
			y *= nb;
			x--;
		}
	}
	return (y);
}