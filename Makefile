CC := cc
CFLAGS := -Wall -Wextra -Werror # -Ofast
DEBUG_FLAGS := -g -O0
NAME := push_swap

# .h files 
H_FILES := include/push_swap.h

# .c files
SRC_DIR := src
vpath %.c $(SRC_DIR)
SRC_FILES := ft_free_content.c ft_free_push_swap.c ft_get_prev.c ft_get_stack_value.c ft_init_push_swap.c ft_print_push_swap.c ft_print_stack.c ft_push.c ft_reverse_rotate.c ft_rotate.c ft_set_stack_value.c main.c swap.c

# .o files 
OBJ_DIR := obj
OBJ_FILES := $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))

# libft 
LIBFT_DIR := libft
LIBFT := $(LIBFT_DIR)/libft.a

# includes 
INCLUDES := -I include -I libft
LIBS := $(LIBFT)
LDFLAGS := -L$(LIBFT_DIR)
LDLIBS := -lft

# all
all: $(NAME)

# Regular Objs
$(NAME): $(OBJ_FILES) $(LIBS)
	$(CC) $(OBJ_FILES) $(LDFLAGS) $(LDLIBS) -o $(NAME)

# Compile OBJ_FILES
$(OBJ_DIR)/%.o: %.c $(H_FILES) | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# clean 
clean:
	$(RM) -r $(OBJ_DIR)
	$(MAKE) -C $(LIBFT_DIR) clean

# fclean
fclean:
	$(RM) -rf $(OBJ_DIR)
	$(RM) -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

# re
re: fclean all

# debug
debug: CFLAGS += $(DEBUG_FLAGS)
debug: re

.PHONY: all clean fclean re debug
