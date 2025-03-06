# **************************************************************************** #
#                                                                              #
#                                                     _.._  .           .      #
#    Makefile                                       .' .-'`        *           #
#                                                  /  /       +        *       #
#    By: ldel-val <ldel-val@student.42madrid.com>  |  |           *            #
#                                                  \  '.___.;       +          #
#    Created: 2025/03/05 17:51:44 by ldel-val       '._  _.'   .        .      #
#    Updated: 2025/03/06 19:55:27 by ldel-val          ``                      #
#                                                                              #
# **************************************************************************** #

# Name of the archive file
NAME = garbage_control.a
# Compiler
CC = cc
# Compiler flags
#CFLAGS -Wall -Wextra -Werror -Isrc
# Archiver
AR = ar
# Archiver flags
ARFLAGS = -rc
RM = rm -f

##########################
#        SOURCES         #
##########################
SRC =	dump_management/dump_add_node.c\
		lib_functs/allocation.c\
		lib_functs/init.c

# Source to object conversion
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
