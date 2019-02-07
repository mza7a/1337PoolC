/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fun.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmzah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 14:33:10 by hmzah             #+#    #+#             */
/*   Updated: 2019/01/27 21:30:13 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FUN_H
# define FT_FUN_H

# include <unistd.h>

int		eval_expr(char *str);
int		pm_calc(char **str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char **str);
int		paren_calc(char **str);
int		mdm_calc(char **str);

#endif
