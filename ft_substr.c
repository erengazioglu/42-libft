/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:43:14 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/18 19:56:23 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	char	*ptr;

	temp = ft_calloc(len + 1, sizeof(char));
	if (!temp)
		return (NULL);
	if (len == 0 || start > ft_strlen(s))
		return (temp);
	len += start;
	ptr = temp;
	while (start < len)
	{
		*(temp++) = s[start];
		start++;
	}
	return (ptr);
}
