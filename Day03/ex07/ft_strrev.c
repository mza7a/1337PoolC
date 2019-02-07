/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 06:16:57 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/11 08:30:16 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		len(char *strl)
{
	int	length;

	length = 0;
	while (*strl++)
		++length;
	return (length);
}

char	*ft_strrev(char *str)
{
	int		mitm;
	int		begin;
	int		final;

	begin = 0;
	final = len(str) - 1;
	while (begin < final)
	{
		mitm = str[begin];
		str[begin] = str[final];
		str[final] = mitm;
		begin++;
		final--;
	}
	return (str);
}
