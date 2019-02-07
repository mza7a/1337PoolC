/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 09:35:26 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/15 00:23:54 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_prime(int nb)
{
	int b;

	b = 2;
	if (nb == 0 || nb == 1)
		return (0);
	else if (nb >= 2)
	{
		while (b < nb)
		{
			if ((nb % b) == 0)
				return (0);
			b++;
		}
	}
	else
		return (0);
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int nextprime;

	if (nb <= 2)
		return (2);
	else if (is_prime(nb) == 1)
		return (nb);
	nextprime = nb + 1;
	while (is_prime(nextprime) != 1)
	{
		nextprime++;
	}
	return (nextprime);
}
