/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:42:03 by egaziogl          #+#    #+#             */
/*   Updated: 2026/04/05 21:45:44 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * @brief Writes a string to a file descriptor.
 * @param n		String to write.
 * @param fd	File descriptor to write in.
 * @param newline	Option to print a '\n' after.
 */
void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_fd(*(s++), fd);
}
