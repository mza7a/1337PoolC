/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mdm_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 20:23:04 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/27 21:25:51 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fun.h"

int			mdm_calc(char **str)
{
	int		lul;
	int		lul2;
	char	op;

	lul = paren_calc(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		op = **str;
		if (op != '/' && op != '*' && op != '%')
			return (lul);
		(*str)++;
		lul2 = paren_calc(str);
		if (op == '/')
			lul /= lul2;
		else if (op == '*')
			lul *= lul2;
		else if (op == '%')
			lul %= lul2;
	}
	return (lul);
}
