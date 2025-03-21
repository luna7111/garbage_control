# **************************************************************************** #
#                                                                              #
#                                                     _.._  .           .      #
#    Makefile                                       .' .-'`        *           #
#                                                  /  /       +        *       #
#    By: ldel-val <ldel-val@student.42madrid.com>  |  |           *            #
#                                                  \  '.___.;       +          #
#    Created: 2025/03/05 17:51:44 by ldel-val       '._  _.'   .        .      #
#    Updated: 2025/03/20 21:45:13 by ldel-val          ``                      #
#                                                                              #
# **************************************************************************** #

# Name of the archive file
NAME = garbage_control.a
# Compiler
CC = cc
# Compiler flags
CFLAGS = -Wall -Wextra -Werror -Isrc -D VERBOSE
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
		src/dump_management/aux/find_node.c\
		src/dump_management/dump_delete_node.c\
		src/dump_management/print_dump.c\
		src/lib_functs/allocation.c\
		src/lib_functs/init.c\
		src/lib_functs/track.c\
		src/lib_functs/terminate.c\
		src/lib_functs/cleanup.c
####################################################
#   Test file, remove before usage of the library  #
####################################################
TESTFILE = test.c
TESTNAME = TEST

# Source to object conversion
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

$(TESTNAME): $(NAME)
	$(CC) $(CFLAGS) $(TESTFILE) $(NAME) -o $(TESTNAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
