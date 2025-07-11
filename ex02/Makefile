# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/10 18:29:37 by aokhapki          #+#    #+#              #
#    Updated: 2025/07/10 19:37:18 by aokhapki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = brain
SRC     = main.cpp
CXX     = c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
OBJ     = $(SRC:.cpp=.o)
RM      = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

main.o: main.cpp

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
