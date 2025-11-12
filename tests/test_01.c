/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:57:49 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/10 17:55:43 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include <bsd/string.h>

void	test_strncmp(void)
{
	printf("--\n-- Testing 'strncmp'\n\n");
	print_strncmp("hello", "hel10", 3);
	print_strncmp("hello", "hel10", 5);
	print_strncmp("hello", "hello42", 7);
	printf("\n");
}

void	test_isascii(void)
{
	printf("--\n-- Testing 'isascii'\n\n");
	print_isascii('c');
	print_isascii((char)12);
	print_isascii((char)135);
	printf("\n");
}

void	test_isprint(void)
{
	printf("--\n-- Testing 'isprint'\n\n");
	print_isprint('c');
	print_isprint((char)12);
	print_isprint((char)135);
	printf("\n");
}

void	test_strlcpy(void)
{
	char	s[20] = "hello";

	printf("--\n-- Testing 'strlcpy'\n\n");
	print_strlcpy(s, "what", 2);
	print_strlcpy(s, "holler", 5);
	print_strlcpy(s, "yo", 0);
	print_strlcpy(s, "yo", 1);
}

void	test_strlcat(void)
{
	char	s1[20] = "hello";
	char	s2[20] = "hello";


	printf("--\n-- Testing 'strlcat'\n\n");
	print_strlcat(s1, "", 20);
	print_strlcat(s1, " i am", 20);
	print_strlcat(s1, " under", 20);
	print_strlcat(s1, " the water", 20);

	print_strlcat_orig(s2, "", 20);
	print_strlcat_orig(s2, " i am", 20);
	print_strlcat_orig(s2, " under", 20);
	print_strlcat_orig(s2, " the water", 20);

}
