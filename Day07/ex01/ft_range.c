/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 02:43:26 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/23 03:06:41 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*itr;
	int i;

	i = 0;
	if (min < -2147483648 || max > 2147483647 || min >= max)
		return (NULL);
	itr = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		itr[i] = min;
		i++;
		min++;
	}
	itr[i] = '\0';
	return (itr);
}
