#ifndef LIBFT_H
#define LIBFT_H
#include<unistd.h>
#include<stdlib.h>

int ft_isalpha(int x);
int ft_isdigit(int x);
int ft_isalnum(int x);
int ft_isascii(int x);
int ft_isprint(int x);
int ft_toupper(int x);
int ft_tolower(int x);
size_t strlen(const char *str);
char *strlcpy(char *dest, const char *src, size_t y);
char *strlcat(char *dest, const char *src, size_t nb);
char *ft_strchr(const char *str, int y);
char *ft_strrchr(const char *str, int y);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char	*s1, const char *s2, size_t len);
int ft_atoi(const char *str);
void *ft_memset(void *str, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t len);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *str, int c, size_t n);

#endif 