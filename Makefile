# **************************************************************************** #
#                                                                              #
#                                                     _.._  .           .      #
#    Makefile                                       .' .-'`        *           #
#                                                  /  /       +        *       #
#    By: ldel-val <ldel-val@student.42madrid.com>  |  |           *            #
#                                                  \  '.___.;       +          #
#    Created: 2025/03/05 17:51:44 by ldel-val       '._  _.'   .        .      #
#    Updated: 2025/03/06 20:07:06 by ldel-val          ``                      #
#                                                                              #
# **************************************************************************** #

# Name of the archive file
NAME = garbage_control.a
# Compiler
CC = cc
# Compiler flags
CFLAGS = -Wall -Wextra -Werror -Isrc
# Archiver
AR = ar
# Archiver flags
ARFLAGS = -rc
# Remove command
RM = rm -f

##########################
#        SOURCES         #
##########################
SRC =	src/dump_management/dump_add_node.c\
		src/lib_functs/allocation.c\
		src/lib_functs/init.c

# Source to object conversion
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
