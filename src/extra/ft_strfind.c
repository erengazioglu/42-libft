/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:18:45 by egaziogl          #+#    #+#             */
/*   Updated: 2026/04/06 01:03:46 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft_base.h"

/**
 * @brief	Finds a specific value in a string, and returns the index of the
 * first occurrence.
 * @param s	String to be checked.
 * @param c	Character to find.
 * @param n	Number of characters to check.
 * @param reverse	If true, start checking from the end.
 * @return	The index of the first matching character.
 * @note	To get a pointer to the first match instead, use ft_strchr.
 * 			Prefer ft_strchr when only checking if value exists, 
 * 			since it returns a NULL if it's not found.
 */
int	ft_strfind(char *s, char c, int n, bool reverse)
{
	int	i;
	int dir;

	dir = -reverse | 1;
	i = 0;
	if (reverse)
		i = ft_strlen(s) - 1;
	while (s[i] && n--)
	{
		if (s[i] == c)
			return (i);
		i += dir;
	}
	return (-1);
}
