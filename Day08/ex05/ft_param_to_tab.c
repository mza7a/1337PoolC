/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 10:10:11 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/26 10:50:09 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_par.h"

int				ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*ft_strdup(char *src)
{
	int			len;
	int			i;
	char		*str;

	i = 0;
	len = ft_strlen(src);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

t_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*parmarray;

	parmarray = malloc(sizeof(*parmarray) * (ac + 1));
	if (parmarray == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		parmarray[i].size_param = ft_strlen(av[i]);
		parmarray[i].str = av[i];
		parmarray[i].copy = ft_strdup(av[i]);
		parmarray[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	parmarray[i].str = NULL;
	return (parmarray);
}
