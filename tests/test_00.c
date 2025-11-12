/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:05:10 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/08 14:13:24 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	test_isalpha(void)
{
	printf("--\n-- Testing 'isalpha'\n\n");
	print_isalpha('2');
	print_isalpha('Z');
	print_isalpha('a');
	print_isalpha(' ');
	printf("\n");
}

void	test_isalnum(void)
{
	printf("--\n-- Testing 'isalnum'\n\n");
	print_isalnum('2');
	print_isalnum('Z');
	print_isalnum('a');
	print_isalnum(' ');
	printf("\n");
}

void	test_isdigit(void)
{
	printf("--\n-- Testing 'isdigit'\n\n");
	print_isdigit('2');
	print_isdigit('Z');
	print_isdigit('a');
	print_isdigit(' ');
	printf("\n");
}

void	test_strlen(void)
{
	printf("--\n-- Testing 'strlen'\n\n");
	print_strlen("hello!");
	print_strlen("");
	print_strlen("l32;mr 3p- a0f");
	printf("\n");
}

void	test_atoi(void)
{
	printf("--\n-- Testing 'atoi'\n\n");
	print_atoi("1239");
	print_atoi("-1239");
	print_atoi("  23 234");
	print_atoi("--123094");
	printf("\n");
}
