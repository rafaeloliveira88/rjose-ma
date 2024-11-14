/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex_pointer.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:48:17 by rafael            #+#    #+#             */
/*   Updated: 2024/11/13 21:04:32 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_dec_to_hex_pointer_aux(unsigned long number)
{
	int	c;
	int	count;

	count = 0;
	if (number >= 16)
		count += ft_dec_to_hex_pointer_aux(number / 16);
	c = "0123456789abcdef"[(number % 16)];
	count += 1;
	ft_putchar(c);
	return (count);
}

int	ft_dec_to_hex_pointer(unsigned long number)
{
	if (number == 0)
		return (ft_putstr("(nil)"));
	else
	{
		ft_putstr("0x");
		return (ft_dec_to_hex_pointer_aux(number) + 2);
	}
}
