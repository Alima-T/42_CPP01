# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aokhapki <aokhapki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/08 00:06:32 by aokhapki          #+#    #+#              #
#    Updated: 2025/07/10 19:52:09 by aokhapki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Directories
SRC_DIR = src
MAIN_DIR = main
INC_DIR = include
OBJ_DIR = obj

# Files
SRCS = $(wildcard $(SRC_DIR)/*.cpp) $(wildcard $(MAIN_DIR)/*.cpp)
OBJS = $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(notdir $(SRCS)))
NAME = zombiehorde

# Compiler and flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR)

# Colors
GREEN = \033[0;32m
RESET = \033[0m

all: $(NAME)
	@printf "\n"
	@printf "$(GREEN)"
	@printf "   ____               _     _      \n"
	@printf "  |_  /___  _ __ ___ | |__ (_) ___ \n"
	@printf "   / // _ \\| '_ ' _ \\| '_ \\| |/ _ \ \n"
	@printf "  /___\\___/| | | | | | |_) | |  __/\n"
	@printf " /____\\___/|_| |_| |_|_.__/|_|\\___|\n"
	@printf "                                   \n"
	@printf "$(RESET)\n"

# Linking the executable
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(addprefix $(OBJ_DIR)/, $(notdir $(OBJS)))

# Compile object files into obj/
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(MAIN_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Remove object files
clean:
	rm -rf $(OBJ_DIR)

# Remove executable and object files
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re
