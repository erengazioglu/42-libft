/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:24:27 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/10 17:14:15 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../libft.h"

void	test_toupper(void)
{
	printf("--\n-- Testing 'toupper'\n\n");
	print_toupper('F');
	print_toupper('f');
	print_toupper('3');
	print_toupper(' ');
	printf("\n");
}

void	test_tolower(void)
{
	printf("--\n-- Testing 'tolower'\n\n");
	print_tolower('F');
	print_tolower('f');
	print_tolower('3');
	print_tolower(' ');
	printf("\n");
}

void	test_bzero(void)
{
	int		test_int[20] = {1, 3, 2, 30, 349};
	char	test_char[20] = "hello world";
	int		i = 0;

	printf("--\n-- Testing 'bzero' (9 bytes)\n\n");
	ft_bzero(test_int, 9);
	ft_bzero(test_char, 9);
	while (i < 6)
	{
		printf("int array, place %d: %d\n", i, test_int[i]);
		i++;
	}
	i = 0;
	while (i < 6)
	{
		printf("char array, place %d: %d\n", i, test_char[i]);
		i++;
	}
	printf("\n");

}

void	test_strchr(void)
{
	char	str[11] = "what's up";

	printf("--\n-- Testing 'strchr'\n\n");
	print_strchr("hello", 'l');
	print_strchr("", 'a');
	print_strchr("what's up", 'z');
	print_strchr("yo", 'y');
	printf("%p\n", ft_strchr(str, '\0'));
	printf("%p\n", &str[10]);
	printf("%p\n", ft_strchr("yo", 'y'));
	printf("\n");
}

void	test_strrchr(void)
{
		char	str[11] = "what's up";

	printf("--\n-- Testing 'strrchr'\n\n");
	print_strrchr("hello", 'l');
	print_strrchr("", 'a');
	print_strrchr("what's up", 'z');
	print_strrchr("yo", 'y');
	printf("%p\n", ft_strrchr(str, '\0'));
	printf("%p\n", &str[10]);
	printf("%p\n", ft_strrchr("yo", 'y'));
	printf("\n");
}