
NAME = libft.a
OBJS_D := objs/
HEAD := -I .
#HEAD := -I includes/

CFLAGS = -Wall -Wextra -Werror

SRC := \
	ft_memset.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_memcmp.c \
	ft_calloc.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strrchr.c \
	ft_strlcat.c \
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
	ft_strncat.c \
	ft_itoa.c \
	ft_lenint.c \
	ft_free_2d.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strmapi.c \
	ft_strtrim.c \
	ft_strchr.c \
	ft_split.c \
	ft_cw.c \
	ft_ws.c \
	ft_free_2d.c \
	ft_memchr.c \
	ft_memmove.c \
	ft_strncmp.c \
	ft_strnstr.c \

OBJS := $(SRC:.c=.o)



all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	gcc $(CFLAGS) $(HEAD) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(NAME) $(OBJS)

re: fclean all
