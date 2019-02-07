/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 11:13:57 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/26 11:15:40 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef struct	s_stock_par
{
	int			size_param;
	char		*str;
	char		*copy;
	char		**tab;
}				t_stock_par;

void			ft_show_tab(t_stock_par *par);

t_stock_par		*ft_param_to_tab(int ac, char **av);

void			ft_putchar(char c);

void			ft_putnbr(int nb);

void			ft_print_word_tables(char **tab);

#endif
