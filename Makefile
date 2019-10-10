
EXE = libft.a
OBJS_D := objs/
HEAD := -I .
#HEAD := -I includes/

CFLAGS = -Wall -Wextra -Werror

SRC := \
	ft_memset.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strrchr.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_putstr_fd.c \
	ft_putnbr_fd.c \
	ft_putendl_fd.c \
	ft_putchar_fd.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_atoi.c \
	ft_bzero.c \

OBJS := $(SRC:.c=.o)



all: $(EXE)

$(EXE): $(OBJS)
	ar rcs $(EXE) $(OBJS)

%.o: %.c
	gcc $(CFLAGS) $(HEAD) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(EXE) $(OBJS)

re: fclean all
