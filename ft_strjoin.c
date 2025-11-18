/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:42:44 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/18 19:55:31 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len + 1);
	ft_strlcat(result, s2, len + 1);
	return (result);
}
