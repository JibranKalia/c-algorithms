NAME 	:= libft.a
CFLAGS 	+= -Wall -Wextra -Werror
#CFLAGS	+= --pedantic-errors 
#CFLAGS += -ggdb
#CFLAGS	+= -fsanitize=address 
#CFLAGS	+= -Wmissing-prototypes

SRC = ft_putchar.c \
	  ft_putchar_fd.c \
	  ft_strcmp.c \
	  ft_putendl.c \
	  ft_putendl_fd.c \
	  ft_putnbr.c \
	  ft_putstr.c \
	  ft_putstr_fd.c \
	  ft_putnbr_fd.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isblank.c \
	  ft_iscntrl.c \
	  ft_isdigit.c \
	  ft_isgraph.c \
	  ft_islower.c \
	  ft_isprint.c \
	  ft_ispunct.c \
	  ft_isspace.c \
	  ft_isupper.c \
	  ft_isxdigit.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_memcpy.c \
	  ft_memalloc.c \
	  ft_memdel.c \
	  ft_memccpy.c \
	  ft_memchr.c \
	  ft_memmove.c \
	  ft_bzero.c \
	  ft_memset.c \
	  ft_memcmp.c \
	  ft_strcat.c \
	  ft_strncat.c \
	  ft_strlcat.c \
	  ft_strncmp.c \
	  ft_strlen.c \
	  ft_strnlen.c \
	  ft_strcpy.c \
	  ft_strclr.c \
	  ft_strncpy.c \
	  ft_strdup.c \
	  ft_strndup.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strstr.c \
	  ft_strnstr.c \
	  ft_strnew.c \
	  ft_strdel.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strsplit.c \
	  ft_atoi.c \
	  ft_abs.c \
	  ft_habibstr.c \

RED 	= \033[0;31m
YELLOW 	= \033[0;33m
NC		= \033[0m
		
.PHONY = all clean

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(OBJ): %.o: %.c
	@echo "Compiling Object Files"
	@gcc -c $(CFLAGS) $< -o $@

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ) 
	@echo "Library Created" 

clean: 
	@rm -f $(OBJ) a.out
	@echo "\033[32mRemoved Object Files\033[0m"

fclean: clean
	@rm -f $(NAME) 
	@echo "\033[32mRemoved Compiled Files.\033[0m" 

re: fclean all 

test: all 
	@rm -f test
	@echo "${YELLOW}Test1: Ctype Functions${NC}"
	@gcc $(CFLAGS) test_ctype.c -L. -lft -o test1
	@./test1
	@echo "${YELLOW}Test2: Memset, Memchr, Memcpy, Memcmp, Memccpy, Memmove${NC}"
	@gcc $(CFLAGS) test_mem.c -L. -lft -o test2
	@./test2
	@echo "${YELLOW}Test3: Bzero${NC}"
	@gcc $(CFLAGS) test_bzero.c -L. -lft -o test3
	@./test3
	@echo "${YELLOW}Test4: String Tests${NC}"
	@gcc $(CFLAGS) test_str.c -L. -lft -o test4
	@./test4
	@echo "${YELLOW}Test5: Strlcat Test${NC}"
	@gcc $(CFLAGS) test_strlcat.c -L. -lft -o test5
	@./test5
	@echo "${YELLOW}Test6: Strsplit Test${NC}"
	@gcc $(CFLAGS) test_ftstrsplit.c -L. -lft -o test6
	@./test6
	@echo "${YELLOW}Test7: Number Tests${NC}"
	@gcc $(CFLAGS) test_nbr.c -L. -lft -o test7
	@./test7
	@rm -f test1 test2 test3 test4 test5 test6 test7
