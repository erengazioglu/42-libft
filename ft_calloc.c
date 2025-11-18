/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:47:38 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/18 19:50:05 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	int				bytes;
	void			*ptr;

	bytes = count * size;
	temp = malloc(bytes);
	if (!temp)
		return (NULL);
	ptr = (void *) temp;
	while (bytes--)
		*(temp++) = 0;
	return (ptr);
}
