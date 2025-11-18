/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:47:29 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/18 19:52:41 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*temp;

	if (dest == src)
		return (dest);
	temp = dest;
	while (n--)
		*((char *)dest++) = *((char *)src++);
	return (temp);
}
