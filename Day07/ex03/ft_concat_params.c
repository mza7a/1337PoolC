/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 03:18:24 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/26 13:41:20 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (dest[i])
		i++;
	dest[i] = '\n';
	i++;
	while (src[c])
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	return (dest);
}

char	*ft_concat_params(int ac, char **av)
{
	char	*tab;
	int		i;

	i = 2;
	tab = (char*)malloc(sizeof(char) * (ac));
	if (ac > 1)
	{
		tab = av[1];
		while (i < ac)
		{
			ft_strcat(tab, av[i]);
			i++;
		}
		i = 0;
		while (tab[i])
			i++;
	}
	tab[i] = '\0';
	return (tab);
}
