/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:24:02 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/14 15:28:47 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	char	*temp;
	size_t	len;

	len = ft_strlen(s);
	temp = malloc((len + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	ptr = temp;
	while (len--)
		*(temp++) = *(s++);
	*temp = '\0';
	return (ptr);
}