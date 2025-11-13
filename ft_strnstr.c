/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:36:35 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/13 18:48:59 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	while (*haystack && len--)
	{
		if (*haystack == *needle)
			if (!ft_strncmp(haystack, needle, ft_strlen(needle)))
				return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}

// #include <stdio.h>

// int		main(void)
// {
// 	printf(
// 		"'%s' in '%s': %s\n", 
// 		"lo", 
// 		"hello my friend to the end", 
// 		ft_strnstr("hello my friend to the end", "lo", 16)
// 	);
// }