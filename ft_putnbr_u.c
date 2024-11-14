/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:46:22 by rafael            #+#    #+#             */
/*   Updated: 2024/11/13 21:40:01 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count = count + ft_putnbr_u((n / 10));
	count++;
	ft_putchar("0123456789"[(n % 10)]);
	return (count);
}
