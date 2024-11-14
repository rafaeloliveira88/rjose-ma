/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:33:47 by rafael            #+#    #+#             */
/*   Updated: 2024/11/13 21:48:03 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	unsigned int	nbr;
	int				count;

	count = 0;
	if (n < 0)
	{
		ft_putchar('-');
		count++;
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr >= 10)
		count = count + ft_putnbr((nbr / 10));
	count++;
	ft_putchar("0123456789"[nbr % 10]);
	return (count);
}
