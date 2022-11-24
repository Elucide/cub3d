SRCS		=	ft_atoi.c		\
				ft_isascii.c	\
			   	ft_memset.c		\
			   	ft_split.c		\
			   	ft_strlcpy.c	\
			   	ft_strrchr.c	\
				ft_bzero.c		\
			   	ft_isdigit.c	\
				ft_memchr.c		\
				ft_putchar_fd.c	\
				ft_strchr.c		\
				ft_strlen.c		\
				ft_strtrim.c	\
				ft_calloc.c		\
				ft_isprint.c	\
				ft_memcmp.c		\
				ft_putendl_fd.c	\
				ft_strdup.c		\
				ft_strmapi.c	\
				ft_substr.c		\
				ft_isalnum.c	\
				ft_itoa.c		\
				ft_memcpy.c		\
				ft_putnbr_fd.c	\
				ft_strjoin.c	\
				ft_strncmp.c	\
				ft_tolower.c	\
				ft_isalpha.c	\
				ft_memmove.c	\
				ft_putstr_fd.c	\
				ft_strlcat.c	\
				ft_strnstr.c	\
				ft_toupper.c	\
				ft_striteri.c	\

NAME		=	libft.a

OBJ			=	$(SRCS:.c=.o)

DEP			= 	$(SRCS:%.c=%.d)

all			:	$(NAME)

$(NAME)		:	$(OBJ)
				ar rc $(NAME) $(OBJ)
				ranlib $(NAME)
$(OBJ)		:
				gcc -Wall -Wextra -Werror -MP -MMD -c $(SRCS)

clean		:
				rm -f $(OBJ)
				rm -f $(BONUS_OBJS)
				rm -f $(DEP)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all

-include $(DEP)

.PHONY		:	all clean norme fclean re

