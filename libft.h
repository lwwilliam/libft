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
size_t strlen (const char *str);
char *strncpy ( char *dest, const char *src, size_t y);
char *strlcat ( char *dest, const char *src, size_t nb);



#endif 