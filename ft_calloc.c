/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:47:38 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/24 17:38:12 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			bytes;
	void			*ptr;

	if (count == 0 || size == 0)
	{
		temp = malloc(0);
		if (!temp)
			return (NULL);
		*temp = 0;
		return (temp);
	}
	if (count > SIZE_MAX / size)
		return (NULL);
	bytes = count * size;
	temp = malloc(bytes);
	if (!temp)
		return (NULL);
	ptr = (void *) temp;
	while (bytes--)
		*(temp++) = 0;
	return (ptr);
}
