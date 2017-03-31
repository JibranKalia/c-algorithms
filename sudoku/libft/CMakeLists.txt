cmake_minimum_required(VERSION 2.6)
project(libft)

set(SOURCE_FILES ft_putchar.c
        ft_putchar_fd.c
        ft_putendl_fd.c
        ft_putnbr.c
        ft_putstr.c
        ft_putstr_fd.c
        ft_putnbr_fd.c
        ft_isalnum.c
        ft_isalpha.c
        ft_isascii.c
        ft_isblank.c
        ft_iscntrl.c
        ft_isdigit.c
        ft_isgraph.c
        ft_islower.c
        ft_isprint.c
        ft_ispunct.c
        ft_isspace.c
        ft_isupper.c
        ft_isxdigit.c
        ft_tolower.c
        ft_toupper.c
        ft_memcpy.c
        ft_memalloc.c
        ft_memdel.c
        ft_memccpy.c
        ft_memchr.c
        ft_memmove.c
        ft_bzero.c
        ft_memset.c
        ft_memcmp.c
        ft_strcat.c
        ft_strncat.c
        ft_strlcat.c
        ft_strncmp.c
        ft_strlen.c
        ft_strnlen.c
        ft_strcpy.c
        ft_strdup.c
        ft_strclr.c
        ft_strncpy.c
        ft_strndup.c
        ft_strchr.c
        ft_strrchr.c
        ft_strstr.c
        ft_strnstr.c
        ft_strnew.c
        ft_strdel.c
        ft_striter.c
        ft_striteri.c
        ft_strsplit.c
        ft_atoi.c
        ft_abs.c
        ft_putendl.c
        ft_strcmp.c
        libft.h
        )

set(CMAKE_C_STANDARD 90)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")
add_library(libft ${SOURCE_FILES})
target_include_directories (libft PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
#add_executable(test1 test_ctype.c)
#add_executable(test2 test_strsplit.c ft_habibstr.c)
#add_executable(test3 test_mem.c)
#add_executable(test4 test_nbr.c)
#add_executable(test5 test_bzero.c)
#add_executable(test6 test_strlcat.c)
#add_executable(test7 test_str.c)
#target_link_libraries(test1 libft)
#target_link_libraries(test2 libft)
#target_link_libraries(test3 libft)
#target_link_libraries(test4 libft)
#target_link_libraries(test5 libft)
#target_link_libraries(test6 libft)
#target_link_libraries(test7 libft)

