# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/23 19:17:57 by yuliano           #+#    #+#              #
#    Updated: 2026/01/23 19:23:35 by yuliano          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++ -g
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ClapTrap
SRC = ClapTrap.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all