/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:36:35 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/18 19:56:13 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (!(*needle))
		return ((char *) haystack);
	if (!len)
		return (NULL);
	needle_len = ft_strlen(needle);
	while (*haystack && len-- >= needle_len)
	{
		if (*haystack == *needle)
			if (!ft_strncmp(haystack, needle, ft_strlen(needle)))
				return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}
