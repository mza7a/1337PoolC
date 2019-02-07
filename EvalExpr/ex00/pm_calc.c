/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pm_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 20:32:53 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/27 20:47:59 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fun.h"

int			pm_calc(char **str)
{
	int		lmao;
	int		lmfao;
	char	op;

	lmao = mdm_calc(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		op = **str;
		if (op != '+' && op != '-')
			return (lmao);
		(*str)++;
		lmfao = mdm_calc(str);
		if (op == '+')
			lmao += lmfao;
		else if (op == '-')
			lmao -= lmfao;
	}
	return (lmao);
}
