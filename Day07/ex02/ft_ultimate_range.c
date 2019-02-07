/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 02:52:20 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/23 03:06:12 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *itr;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	itr = malloc(sizeof(int) * (max - min));
	if (itr == NULL)
		return (0);
	while (min < max)
	{
		itr[i] = min;
		i++;
		min++;
	}
	*range = itr;
	return (i);
}
