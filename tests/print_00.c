/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:12:18 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/10 16:27:18 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	print_isalpha(int c)
{
	printf("ft_isalpha(%c): %d\n", c, ft_isalpha(c));
}

void	print_isalnum(int c)
{
	printf("ft_isalnum(%c): %d\n", c, ft_isalnum(c));
}

void	print_isdigit(int c)
{
	printf("ft_isdigit(%c): %d\n", c, ft_isdigit(c));
}

void	print_strlen(const char *str)
{
	printf("ft_strlen(%s): %zu\n", str, ft_strlen(str));
}

void	print_atoi(const char *str)
{
	printf("ft_atoi(%s): %d\n", str, ft_atoi(str));
}
