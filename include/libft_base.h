/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_base.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 21:41:41 by egaziogl          #+#    #+#             */
/*   Updated: 2026/04/04 21:55:06 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_BASE
# define FT_LIBFT_BASE

# include <stdbool.h>
# include <unistd.h>

// char checks
bool	ft_isalnum(int c);
bool	ft_isalpha(int c);
bool	ft_isdigit(int c);
bool	ft_isascii(int c);
bool	ft_isprint(int c);
bool	ft_toupper(int c);
bool	ft_tolower(int c);

// write
void	ft_putchar(char c, int fd);
void	ft_putstr(char *s, int fd);
void	ft_putstr_nl(char *s, int fd);
void	ft_putnbr(int n, int fd);

// string checks
size_t	ft_strlen(const char *s);
bool	ft_str_startswith(char *str, char *test);
bool	ft_str_endswith(char *str, char *test);
bool	ft_str_equals(char *str, char *test);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

// string manipulation
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

// int<->str conversions
char	*ft_itoa(int n);
char	*ft_itoa_base(unsigned long n, char *base);
char	*ft_itoa_uint(unsigned int n);

#endif