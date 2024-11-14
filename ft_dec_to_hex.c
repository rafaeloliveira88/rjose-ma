/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:51:35 by rafael            #+#    #+#             */
/*   Updated: 2024/11/13 21:03:25 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dec_to_hex(unsigned int number, int uppercase)
{
	int	c;
	int	count;

	count = 0;
	if (number >= 16)
		count += ft_dec_to_hex(number / 16, uppercase);
	count++;
	if (uppercase)
		c = "0123456789ABCDEF"[(number % 16)];
	else
		c = "0123456789abcdef"[(number % 16)];
	ft_putchar(c);
	return (count);
}
