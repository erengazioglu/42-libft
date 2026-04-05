/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:07:25 by egaziogl          #+#    #+#             */
/*   Updated: 2026/04/05 23:53:16 by egaziogl         ###   ########.fr       */
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
 * @note	To get the index of first match instead, use ft_strfind.
 */
char	*ft_strchr(const char *s, int c, bool reverse)
{
	unsigned char	uc;

	uc = (unsigned char) c;
	if (uc == '\0')
		return ((char *) &s[ft_strlen(s)]);
	while (*s)
	{
		if ((unsigned char) *s == uc)
			return ((char *) s);
		s++;
	}
	return (NULL);
}
