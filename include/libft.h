/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 00:11:29 by egaziogl          #+#    #+#             */
/*   Updated: 2026/04/05 21:36:22 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "libft_base.h"
# include <stddef.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>
# include <fcntl.h>

// ANSI text defines
# define RST "\e[0m"
# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define BLU "\e[0;34m"
# define MAG "\e[0;35m"
# define CYN "\e[0;36m"
# define WHT "\e[0;37m"

// Part 1: Libc functions




// Part 5: ft_printf

typedef unsigned int	t_flags;
int		ft_printf(const char *fstr, ...);

// Part 6: get_next_line

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 64
# endif

char	*get_next_line(int fd);

// Part 7: so_long

char	**read_n_lines(char *fp, int n);

#endif
