/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:04:32 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/10 17:55:46 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include <bsd/string.h>


void	print_strncmp(char *s1, char *s2, int n)
{
	printf(
		"ft_strncmp(%s, %s, %d): %d\n",
		s1, s2, n, ft_strncmp(s1, s2, n)
		);
}

void	print_isascii(char c)
{
	printf(
		"ft_isascii(%c): %d\n",
		c, ft_isascii(c)
		);
}

void	print_isprint(char c)
{
	printf(
		"ft_isprint(%c): %d\n",
		c, ft_isprint(c)
		);
}

void	print_strlcpy(char *dst, const char *src, unsigned int dstsize)
{
	int	retval;

	printf(
		"ft_strlcpy(src \"%s\" -> dst \"%s\" (size %d)): ",
		src, dst, dstsize
		);
	retval = ft_strlcpy(dst, src, dstsize);
	printf("%s (%d)\n", dst, retval);
}

void	print_strlcat(char *dst, const char *src, unsigned int dstsize)
{
	int	retval;

	printf(
		"ft_strlcat(src \"%s\" -> dst \"%s\" (size %d)): ",
		src, dst, dstsize
		);
	retval = ft_strlcat(dst, src, dstsize);
	fflush(0);
	printf("%s (%d)\n", dst, retval);
}

void	print_strlcat_orig(char *dst, const char *src, unsigned int dstsize)
{
	int	retval;

	printf(
		"   strlcat(src \"%s\" -> dst \"%s\" (size %d)): ",
		src, dst, dstsize
		);
	retval = strlcat(dst, src, dstsize);
	fflush(0);
	printf("%s (%d)\n", dst, retval);
}
