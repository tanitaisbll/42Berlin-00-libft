# 42Berlin-00-libft
My own library including standard and non-standard functions in C. <br>
Includes the following functions:

## ctype.h
int		ft_isalnum(int c)<br>
int		ft_isalpha(int c)<br>
int		ft_isascii(int c)<br>
int		ft_isdigit(int c)<br>
int		ft_isprint(int c)<br>
int		ft_toupper(int c)<br>
int		ft_tolower(int c)<br>

## string.h
void	ft_bzero(void *str, size_t n)<br>
void	*ft_memchr(const void *s, int c, size_t n)<br>
int		ft_memcmp(const void *s1, const void *s2, size_t n)<br>
void	*ft_memcpy(void *dst, const void *src, size_t n)<br>
void	*ft_memmove(void *dst, const void *src, size_t n)<br>
void	*ft_memset(void *str, int c, size_t n)<br>
char	*ft_strchr(const char *str, int c)<br>
char	*ft_strrchr(const char *str, int c)<br>
char	*ft_strdup(const char *str)<br>
size_t	ft_strlen(const char *s)<br>
size_t	ft_strlcat(char *dst, const char *src, size_t size)<br>
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)<br>
int		ft_strncmp(const char *s1, const char *s2, size_t n)<br>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)<br>

## stdlib.h
int		ft_atoi(const char *nptr)<br>
void	*ft_calloc(size_t num_elements, size_t element_size)<br>

## non-standard
char	*ft_itoa(int n)<br>
char	*ft_substr(const char *s, unsigned int start, size_t len)<br>
char	*ft_strjoin(const char *s1, const char *s2)<br>
char	*ft_strtrim(const char *s1, const char *set)<br>
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))<br>
void	ft_striteri(char *s, void (*f)(unsigned int, char*))<br>
char	**ft_split(char const *s, char c)<br>
void	ft_putchar_fd(char c, int fd)<br>
void	ft_putstr_fd(char *s, int fd)<br>
void	ft_putendl_fd(char *s, int fd)<br>
void	ft_putnbr_fd(int n, int fd)<br>
