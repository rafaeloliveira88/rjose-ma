/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjose-ma <rjose-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:51:35 by rafael            #+#    #+#             */
/*   Updated: 2024/11/14 16:30:17 by rjose-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned int number, int uppercase)
{
	int	c;
	int	count;

	count = 0;
	if (number >= 16)
		count += ft_putnbr_hex(number / 16, uppercase);
	count++;
	if (uppercase)
		c = "0123456789ABCDEF"[(number % 16)];
	else
		c = "0123456789abcdef"[(number % 16)];
	ft_putchar(c);
	return (count);
}
