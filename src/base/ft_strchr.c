/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:07:25 by egaziogl          #+#    #+#             */
/*   Updated: 2026/04/06 01:12:12 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft_base.h"

/**
 * @brief	Finds a specific value in a string, and returns a pointer to the
 * first occurrence.
 * @param s	String to be checked.
 * @param c	Character to find.
 * @param n	Number of characters to check.
 * @return	A pointer to the first matching character.
 * 	s
 * @note	To get the index of first match instead, use ft_strfind.
 */
char	*ft_strchr(const char *s, int c, int n, bool reverse)
{
	unsigned char	uc;
	int				dir;
	int				len;

	uc = (unsigned char) c;
	len = ft_strlen(s);
	if (uc == '\0' && ((reverse && n) || n >= len - 1))
		return ((char *) &s[len]);
	dir = -reverse | 1;
	if (reverse)
		s += len - 1;
	while (*s && n--)
	{
		if ((unsigned char) *s == uc)
			return ((char *) s);
		s += dir;
	}
	return (NULL);
}
