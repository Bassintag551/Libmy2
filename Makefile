##
## Makefile for libmy in /home/bassintag/c-prog/Libmy
##
## Made by Antoine Stempfer
## Login   <antoine.stempfer@epitech.eu>
##
## Started on  Wed Oct  4 19:31:48 2017 Antoine Stempfer
## Last update Thu Oct  5 22:17:30 2017 Antoine Stempfer
##

CC	=	gcc

AR	=	ar rc

RM	=	rm -f

CFLAGS	=	-Wextra -Wall -I $(INC) -O2 --pedantic

INC	=	include

NAME	=	libmy.a

OBJS	=	$(SRCS:.c=.o)

SRCS	=	src/my_memchr.c \
		src/my_memcmp.c \
		src/my_memcpy.c \
		src/my_memset.c \
		src/my_strlen.c \
		src/my_strnlen.c \
		src/my_strchr.c \
		src/my_strcat.c \
		src/my_strncat.c \
		src/my_strcmp.c \
		src/my_strncmp.c \
		src/my_strcpy.c \
		src/my_strncpy.c \
		src/my_ctype.c \
		src/my_isalpha.c \
		src/my_isupper.c \
		src/my_islower.c \
		src/my_isdigit.c \
		src/my_isxdigit.c \
		src/my_isspace.c \
		src/my_ispunct.c \
		src/my_isalnum.c \
		src/my_isprint.c \
		src/my_isgraph.c \
		src/my_iscntrl.c \
		src/my_atof.c \
		src/my_atoi.c \
		src/my_atol.c \
		src/my_strtod.c \
		src/my_strtol.c \
		src/my_strtoul.c \
		src/my_calloc.c \
		src/my_fputc.c \
		src/my_putc.c \
		src/my_putchar.c \
		src/my_fputs.c \
		src/my_puts.c \
		src/my_list_create.c \
		src/my_list_free.c \
		src/my_list_add_head.c \
		src/my_list_add_tail.c \
		src/my_list_pop_head.c \
		src/my_list_pop_tail.c \
		src/my_list_get.c

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
