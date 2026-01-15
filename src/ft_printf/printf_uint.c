/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_uint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 18:13:30 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/20 11:56:51 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_uint(t_conv *conv, unsigned int val)
{
	int		zeros;
	int		padding;
	int		printed;
	char	*str;

	str = ft_itoa_uint(val);
	if (!str)
		return (-1);
	printed = 0;
	calculate_padding_int(conv, val, &zeros, &padding);
	printed += print_lpadding_int(conv, val, &zeros, &padding);
	printed += ft_putstr_n(str, -1);
	printed += print_rpadding_int(conv, &padding);
	free(str);
	return (printed);
}
