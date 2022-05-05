NAME			= fixed0

INCLUDES		= -I$(HEADERS_DIR)

HEADERS_DIR		= ./
HEADERS_LIST	= Fixed.hpp
HEADERS			= $(addprefix $(HEADERS_DIR), $(HEADERS_LIST))

SRC_DIR			= ./
SRC_LIST		= main.cpp Fixed.cpp
SRC 			= $(addprefix $(SRC_DIR), $(SRC_LIST))


OBJ_DIR			= obj/
OBJ_LIST		= $(patsubst %.cpp, %.o, $(SRC_LIST))
OBJ				= $(addprefix $(OBJ_DIR), $(OBJ_LIST))

CC 		= g++
CFLAGS 	= -Wall -Wextra -Werror -std=c++98

GREEN 	= \x1b[0;32m
RED 	= \x1b[0;31m
RESET 	= \x1b[0m


all: 	$(NAME)

$(NAME): $(OBJ_DIR) $(OBJ) Makefile
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "$(GREEN)$(NAME) is ready.$(RESET)"

$(OBJ_DIR):
		@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp $(HEADERS)
		@$(CC) $(CFLAGS) -c $(INCLUDES) $< -o $@
		@echo "$(GREEN).$(RESET)\c"

clean:
		@rm -rf $(OBJ_DIR)
		@echo "$(NAME): $(RED)$(OBJ_DIR) was deleted$(RESET)"
		@echo "$(NAME): $(RED)object files were deleted$(RESET)"

fclean: clean
		@rm -f $(NAME)
		@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"

re: 	fclean all

.PHONY: all clean fclean re
