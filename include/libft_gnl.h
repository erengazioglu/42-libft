/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_gnl.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 13:34:00 by egaziogl          #+#    #+#             */
/*   Updated: 2026/04/07 13:41:57 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_GNL_H
# define FT_LIBFT_GNL_H

# include "libft_base.h"

# ifndef GNL_BUFSIZ
#  define GNL_BUFSIZ 64
# endif

char	*get_next_line(int fd);

#endif