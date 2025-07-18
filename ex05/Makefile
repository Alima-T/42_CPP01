# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/18 21:22:38 by aokhapki          #+#    #+#              #
#    Updated: 2025/07/18 21:23:05 by aokhapki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Directories
SRC_DIR = src
INC_DIR = include
OBJ_DIR = obj

# Files
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
NAME = harl

# Compiler and flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR)

# Colors
GREEN = \033[0;32m
RESET = \033[0m

all: $(NAME)

# Linking the executable
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Create the object directory and compile object files into obj/
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)   # Make sure the obj/ directory exists
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Remove object files
clean:
	rm -rf $(OBJ_DIR)

# Remove executable and object files
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Special targets
.PHONY: all clean fclean re