/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:37:57 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/10 17:53:20 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include <stdio.h>
# include "../libft.h"

// print_00
void	print_isalnum(int c);
void	print_isalpha(int c);
void	print_isdigit(int c);
void	print_strlen(const char *str);
void	print_atoi(const char *str);
// print_01
void	print_strncmp(char *s1, char *s2, int n);
void	print_isascii(char c);
void	print_isprint(char c);
void	print_strlcpy(char *dst, const char *src, unsigned int dstsize);
void	print_strlcat(char *dst, const char *src, unsigned int dstsize);
void	print_strlcat_orig(char *dst, const char *src, unsigned int dstsize);

// print_02
void	print_toupper(char c);
void	print_tolower(char c);
void    print_strchr(char *s, char c);
void    print_strrchr(char *s, char c);
// test_00
void	test_isalpha(void);
void	test_isalnum(void);
void	test_isdigit(void);
void	test_strlen(void);
void	test_atoi(void);
// test_01
void	test_strncmp(void);
void	test_isascii(void);
void	test_isprint(void);
void	test_strlcpy(void);
void	test_strlcat(void);
// test_02
void	test_toupper(void);
void	test_tolower(void);
void	test_bzero(void);
void	test_strchr(void);
void	test_strrchr(void);


#endif