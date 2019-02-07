/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paren_calc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 20:19:43 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/27 21:26:09 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fun.h"

int		paren_calc(char **str)
{
	int	nb;

	while (**str == ' ')
		(*str)++;
	if (**str == '(')
	{
		(*str)++;
		nb = pm_calc(str);
		if (**str == ')')
			(*str)++;
		return (nb);
	}
	return (ft_atoi(str));
}