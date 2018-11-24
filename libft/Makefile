
NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -I. -c

FILES = 	atoi.c	\
			bzero.c \
			isalpha.c \
			isalphanum.c \
			isascii.c \
			isdigit.c \
			isprint.c \
			strlen.c \
			tolower.c \
			toupper.c \
			strdup.c \
			memset.c \
			memcpy.c \
			memccpy.c \
			strcpy.c \
			memchr.c \
			memmove.c
OBJ  = $(FILES:%.c=%.o)

all: copy $(NAME)

copy:
	cp -f srcs/*.c .

# This won't run if the .o files don't exist or are not modified
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# This won't run if the source files don't exist or are not modified
$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

clean:
	@rm -f $(OBJ)
	@rm -f $(FILES) # comment this line if you don't want it to remove the source files from the root

fclean: clean
	rm -f $(NAME)

re: fclean all

# I use .PHONY to make sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: clean fclean all re
