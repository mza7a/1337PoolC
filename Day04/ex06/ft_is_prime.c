/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 23:20:12 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/15 00:24:19 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
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