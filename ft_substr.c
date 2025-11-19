/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:43:14 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/19 04:51:56 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	char	*ptr;

	if (start > ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	ptr = ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	if (len == 0)
		return (ptr);
	len += start;
	temp = ptr;
	while (start < len && s[start])
	{
		*(temp++) = s[start];
		start++;
	}
	return (ptr);
}
