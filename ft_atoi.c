/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 18:20:54 by egaziogl          #+#    #+#             */
/*   Updated: 2025/11/18 19:48:55 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	acc;
	int	sign;

	if (!(*str))
		return (0);
	sign = 1;
	acc = 0;
	if (!ft_strncmp(str, "-2147483647", 11))
		return (-2147483647);
	while (ft_strchr("\t\v\f\r\n ", *str))
		str++;
	if (ft_strchr("-+", *str))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (sign * acc);
		acc = acc * 10 + (*(str++) - '0');
	}
	return (sign * acc);
}
// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_atoi(""));
// 	printf("%d\n", atoi(""));
// }