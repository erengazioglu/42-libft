/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:06:17 by egaziogl          #+#    #+#             */
/*   Updated: 2026/04/05 22:09:59 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief	Compares bytes from two memory areas.
 * @param s1	
 * @param s2	Memory area to copy from.
 * @param n		Number of bytes to compare.
 * @return		The difference between the first pair of bytes that differ.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;
	int				diff;

	temp1 = (unsigned char *) s1;
	temp2 = (unsigned char *) s2;
	while (n--)
	{
		diff = *(temp1++) - *(temp2++);
		if (diff)
			return (diff);
	}
	return (0);
}
