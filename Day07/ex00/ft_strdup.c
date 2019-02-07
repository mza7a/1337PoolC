/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 02:26:51 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/23 02:42:58 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*str;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
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
