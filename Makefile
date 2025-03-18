
CC= gcc
CFLAGS= -Wall -Wextra -Werror
NAME= libft.a
RM= rm -fr
AR= ar -rc

HEADERS=	libft.h \
		char/char_ft.h \
		numbers/num_ft.h \
		string/str_ft.h \
		memory/mem_ft.h \
		list/list_ft.h \
		print/print_ft.h \
		gnl/gnl_ft.h \
		

SOURCES=	char/ft_isalnum.c \
			char/ft_isalpha.c \
			char/ft_isascii.c \
			char/ft_isprint.c \
			char/ft_iswhitespace.c \
			char/ft_toupper.c\
			char/ft_tolower.c \
			char/ft_isdigit.c \
			numbers/ft_is_int.c \
			numbers/ft_is_p_int.c \
			numbers/ft_is_n_int.c \
			numbers/ft_atoi.c \
			numbers/ft_itoa.c \
			string/ft_strlen.c \
			string/ft_strlcpy.c \
			string/ft_strlcat.c \
			string/ft_strncmp.c \
			string/ft_striteri.c \
			string/ft_strchr.c \
			string/ft_strrchr.c \
			string/ft_strnstr.c \
			string/ft_strtrim.c \
			string/ft_strmapi.c \
			string/ft_split.c \
			string/ft_strjoin.c \
			string/ft_substr.c \
			string/ft_strdup.c \
			memory/ft_calloc.c \
			memory/ft_bzero.c \
			memory/ft_memset.c \
			memory/ft_memcpy.c \
			memory/ft_memmove.c \
			memory/ft_memchr.c \
			memory/ft_memcmp.c \
			memory/ft_free.c \
			memory/ft_free_ptr_array.c \
			memory/ft_ptr_array_length.c \
			list/ft_lstnew.c \
			list/ft_lstadd_front.c \
			list/ft_lstadd_back.c \
			list/ft_lstsize.c \
			list/ft_lstlast.c \
			list/ft_lstdelone.c \
			list/ft_lstclear.c \
			list/ft_lstiter.c \
			list/ft_lstmap.c \
			print/ft_putchar_fd.c \
			print/ft_putstr_fd.c \
			print/ft_putendl_fd.c \
			print/ft_putnbr_fd.c \
			print/ft_putnbr_base_fd.c \
			print/ft_printf_utils.c \
			print/ft_printf.c \
			gnl/get_next_line.c \
			gnl/get_next_line_utils.c \

ODIR = obj
OBJECTS= $(addprefix $(ODIR)/,$(SOURCES:.c=.o))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $@ $^

obj/%.o: %.c $(HEADER)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(ODIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
