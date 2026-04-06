/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:42:03 by egaziogl          #+#    #+#             */
/*   Updated: 2026/04/06 18:54:46 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft_base.h"

/**
 * @brief Writes a string to a file descriptor.
 * @param n		String to write.
 * @param fd	File descriptor to write in.
 * @param newline	Option to print a '\n' after.
 */
void	ft_putstr(char *s, int fd, int n, bool newline)
{
	while (*s && n--)
		ft_putchar(*(s++), fd, false);
	if (newline)
		write(fd, "\n", 1);
}
