# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/10 19:50:38 by aokhapki          #+#    #+#              #
#    Updated: 2025/07/10 20:09:46 by aokhapki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR = src
INC_DIR = include
OBJ_DIR = obj
MAIN_DIR = main
RM = rm -f

SRC = $(wildcard $(SRC_DIR)/*.cpp) $(wildcard $(MAIN_DIR)/*.cpp)
OBJ = $(SRC:.cpp=.o)

NAME = violance

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -I$(INC_DIR)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
%.o: %.cpp
		$(CXX) $(CXXFLAGS) -c $< -o $@
		
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re