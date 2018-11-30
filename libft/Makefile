
NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra  -I. -c

FILES = 	atoi.c	\
				bzero.c \
				isalpha.c	\
				isalphanum.c 	\
				isascii.c			\
				isdigit.c			\
				isprint.c			\
				libft.h				\
				memccpy.c			\
				memchr.c			\
				memcmp.c			\
				memcpy.c			\
				memmove.c			\
				memset.c			\
				strcat.c			\
				strchr.c			\
				strcmp.c			\
				strcpy.c			\
				strdup.c			\
				strlcat.c			\
				strlen.c			\
				strncat.c			\
				strncmp.c			\
				strncpy.c			\
				strnstr.c			\
				strrchr.c			\
				strstr.c			\
				tolower.c			\
				toupper.c			\
				ft_itoa.c			\
				ft_memalloc.c		\
				ft_memdel.c			\
				ft_putchar.c		\
				ft_putchar_fd.c		\
				ft_putendl.c		\
				ft_putendl_fd.c		\
				ft_putnbr.c			\
				ft_putnbr_fd.c		\
				ft_putstr.c			\
				ft_putstr_fd.c		\
				ft_strclr.c			\
				ft_strdel.c			\
				ft_strequ.c			\
				ft_striter.c		\
				ft_striteri.c		\
				ft_strjoin.c		\
				ft_strmap.c			\
				ft_strmapi.c		\
				ft_strnequ.c		\
				ft_strnew.c			\
				ft_strsub.c			
				
OBJ  = $(FILES:%.c=%.o)

all: copy $(NAME)

copy:
	cp -f srcs/*.c srcs/*.h .
	cp -f part2/*.c .

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
so: copy
	gcc -Wall -fPIC -c $(FILES)
	gcc -shared -Wl,-soname,libft.so -o libft.so	*.o

# I use .PHONY to make sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: clean fclean all re so
