/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjose-ma <rjose-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:43:09 by rafael            #+#    #+#             */
/*   Updated: 2024/11/14 15:33:07 by rjose-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	if(!str)
		return (write(1, "(null)", 6));
	count = 0;
	while (*str)
	{
		count += write(1, &(*str), 1);
		str++;
	}
	return (count);
}
