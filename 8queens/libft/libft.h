#ifndef LIBFT_H
# define LIBFT_H

# include <string.h> 

#  define CHK(a, b) do{if(a){return(b);}}while(0)
#  define CHK1(a, b, c) do{if(a){b; return(c);}}while(0)
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr(int n);
void	ft_putstr(char const *src);
void	ft_putstr_fd(char const *src, int fd);
void	ft_putendl(char const *src);
void	ft_putendl_fd(char const *src, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_strcmp(const char *src1, const char *src2);
int		ft_strncmp(const char *src1, const char *src2, size_t len);
char	*ft_strcat(char *dst, const char *src);
char	*ft_strncat(char *src1, const char *src2, size_t len);
size_t	ft_strlcat(char *src1, const char *src2, size_t size);
size_t	ft_strlen(const char *src);
size_t	ft_strnlen(const char *src, size_t maxlen);
char	*ft_strchr(const char *src, int c);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strdup(const char *src);
char	*ft_strndup(const char *src, size_t len);
char	*ft_strstr(const char *src, const char* to_find);
char	*ft_strnstr(const char *src, const char* to_find, size_t n);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *src);
void 	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	**ft_strsplit(const char *src, char c);
char	**strsplit(const char *src, char src_x);

int		ft_isalnum(int c);
int		ft_isalpha(int	c);
int     ft_isascii(int c);
int		ft_isblank(int c);
int		ft_iscntrl(int c);
int		ft_isdigit(int c);
int		ft_isgraph(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_ispunct(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
int		ft_isxdigit(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memccpy(void *dst, const void *src, int src_c, size_t len);
void	*ft_memchr(const void *src, int src_c, size_t len);
int		ft_memcmp(const void *src1, const void *src2, size_t len);
void	ft_bzero(void *src, size_t len);
void	*ft_memset(void *src, int c, size_t len);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);

int		ft_atoi(const char *str);
int		ft_abs(int i);

#endif
