/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:00:40 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/09 16:04:41 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "tests.h"

void	print_toupper(char c)
{
	printf("ft_toupper(%c): %c\n", c, ft_toupper(c));
}

void	print_tolower(char c)
{
	printf("ft_tolower(%c): %c\n", c, ft_tolower(c));
}

void	print_strchr(char *s, char c)
{
	printf("ft_strchr(%c in %s): %s\n", c, s, ft_strchr(s, c));
}

void	print_strrchr(char *s, char c)
{
	printf("ft_strrchr(%c in %s): %s\n", c, s, ft_strrchr(s, c));
}