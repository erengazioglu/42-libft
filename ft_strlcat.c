/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:47:02 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/12 14:37:42 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;

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
