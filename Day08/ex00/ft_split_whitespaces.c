/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 03:09:33 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/29 04:13:08 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count(char *str)
{
	int	i;
	int	j;
	int c;

	i = 0;
	j = 0;
	c = 0;
	if (str[0] == '\0')
		return (0);
	while (str[c])
	{
		if (str[c] == ' ' || str[c] == '\n'
				|| str[c] == '\t' || str[c] == '\0')
			j = 0;
		else
		{
			if (j == 0)
				i++;
			j = 1;
		}
		c++;
	}
	return (i);
}

char	*ft_strwordcat(char *str, int *i)
{
	char	*word;
	int		x;
	int		begin;
	int		final;

	x = *i;
	while (str[x] <= ' ')
		x++;
	begin = x;
	while (str[x] > ' ')
		x++;
	final = x;
	*i = x;
	word = (char*)malloc(sizeof(char) * final - begin);
	x = 0;
	while (begin < final)
	{
		word[x] = str[begin];
		begin++;
		x++;
	}
	word[x] = '\0';
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	char	**worrd;
	int		counteer;
	int		i;

	worrd = (char**)malloc(sizeof(char*) * ft_count(str) + 1);
	counteer = 0;
	i = 0;
	while (counteer < ft_count(str))
	{
		worrd[counteer] = ft_strwordcat(str, &i);
		counteer++;
	}
	worrd[counteer] = 0;
	return (worrd);
}
