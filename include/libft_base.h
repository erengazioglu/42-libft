/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_base.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 21:41:41 by egaziogl          #+#    #+#             */
/*   Updated: 2026/04/07 11:49:16 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_BASE
# define FT_LIBFT_BASE

# include <unistd.h>
# include <stdbool.h>
# include <stdint.h>
# include <stddef.h>

// memory functions

void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_calloc(size_t count, size_t size);

// int checks

int		ft_min(int i1, int i2);
int		ft_max(int i1, int i2);

// char checks & manipulations

bool	ft_isalnum(int c);
bool	ft_isalpha(int c);
bool	ft_isdigit(int c);
bool	ft_isascii(int c);
bool	ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

// write

void	ft_putchar(char c, int fd, bool newline);
void	ft_putnbr(int n, int fd, bool newline);
void	ft_putstr(char *s, int fd, int n, bool newline);

// string checks

size_t	ft_strlen(const char *s);
bool	ft_str_startswith(char *str, char *test, int n);
bool	ft_str_endswith(char *str, char *test, int n);
bool	ft_str_equals(char *str, char *test);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strfind(const char *s, char c, int n, bool reverse);
char	*ft_strchr(const char *s, char c, int n, bool reverse);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_get_filename(char *str);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

// string manipulation (operates on existing strings)

void	ft_strcat(char *dst, const char *src);
char	*ft_strcpy(char *dst, char *src, char delim, char end);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

// string generation (returns new strings)

char	*ft_strdup(const char *s);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char *s1, char *s2, ssize_t n, bool free_s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);

// int<->str conversions
char	*ft_itoa(int n);
char	*ft_itoa_base(unsigned long n, char *base);
char	*ft_itoa_uint(unsigned int n);
int		ft_atoi(const char *str);

#endif