/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 19:49:11 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/15 01:00:04 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int a;
	int result;

	a = 1;
	result = 1;
	if (nb == 0 || nb == 1)
		return (nb);
	else if (nb > 1)
	{
		while (result * result <= nb)
		{
			if (result * result == nb)
				return (result);
			result++;
		}
		return (0);
	}
	else
		return (0);
}
