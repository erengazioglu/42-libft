/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:36:35 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/14 11:47:32 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!(*needle))
		return ((char *) haystack);
	if (!len)
		return (NULL);
	while (*haystack && len--)
	{
		if (*haystack == *needle)
			if (!ft_strncmp(haystack, needle, ft_strlen(needle)))
				return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}