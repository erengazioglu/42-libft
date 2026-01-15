/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaziogl <egaziogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:30:34 by egaziogl          #+#    #+#             */
/*   Updated: 2025/12/20 11:54:48 by egaziogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_hex(t_conv *conv, unsigned int val)
{
	int		zeros;
	int		padding;
	int		printed;
	char	*str;

	if (conv->specifier == 'x')
		str = ft_itoa_base(val, "0123456789abcdef");
	else
		str = ft_itoa_base(val, "0123456789ABCDEF");
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
