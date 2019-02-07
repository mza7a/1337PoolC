# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmzah <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/27 20:15:06 by hmzah             #+#    #+#              #
#    Updated: 2019/01/27 20:44:41 by hmzah            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC += main.c
SRC += ft_functions.c
SRC += eval_expr.c
SRC += mdm_calc.c
SRC += pm_calc.c
SRC += paren_calc.c


$(NAME):
	gcc -Wall -Werror -Wextra $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
