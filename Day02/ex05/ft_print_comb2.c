/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 13:53:40 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/08 14:02:24 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int aa;
	int bb;

	aa = 0 - 1;
	while (aa++ < 98)
	{
		bb = aa;
		while (bb++ < 99)
		{
			ft_putchar(aa / 10 + 48);
			ft_putchar(aa % 10 + 48);
			ft_putchar(' ');
			ft_putchar(bb / 10 + 48);
			ft_putchar(bb % 10 + 48);
			if (aa != 98 || bb != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
