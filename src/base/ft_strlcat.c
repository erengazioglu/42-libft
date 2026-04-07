/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:47:02 by egaziogl          #+#    #+#             */
/*   Updated: 2026/04/07 11:29:37 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief	Copies a string to another, and always NULL-terminates.
 * @param dst	String to overwrite.
 * @param src	String to be copied.
 * @param dstsize	Size of dst. (at most dstsize-1 characters will be copied)
 * @return	Length of src. If retval >= siz, truncation has occurred.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	if (!dstsize)
		return (ft_strlen(src));
	len = ft_strlen(dst);
	if (len > dstsize)
		len = dstsize;
	len += ft_strlen(src);
	while (*dst)
	{
		if (dstsize)
			dstsize--;
		dst++;
	}
	while (*src)
	{
		if (dstsize > 1)
		{
			*(dst++) = *src;
			dstsize--;
		}
		src++;
	}
	*dst = 0;
	return (len);
}
