/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:08:08 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/09 16:05:11 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
#include "../libft.h"
#include "tests.h"

int		main(int argc, char **argv)
{
	(void) argc;
	if (argv[1][0] == '1')
	{
		test_isalpha();
		test_isalnum();
		test_strlen();
		test_isdigit();
		test_atoi();
	}
	else if (argv[1][0] == '2')
	{
		test_strncmp();
		test_isascii();
		test_isprint();
		test_strlcpy();
		test_strlcat();
	}
	else if (argv[1][0] == '3')
	{
		test_toupper();
		test_tolower();
		test_bzero();
		test_strchr();
		test_strrchr();
	}
}
