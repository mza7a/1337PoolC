/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 21:04:16 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/23 10:38:07 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int cpt;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 || cpt > 0) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			cpt = 0;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && cpt == 0 && i != 0)
			str[i] += 32;
		if ((str[i] < 'a' || str[i] > 'z')
				&& (str[i] < 'A' || str[i] > 'Z')
				&& (str[i] < '1' || str[i] > '9'))
			cpt++;
		else
			cpt = 0;
		i++;
	}
	return (str);
}
