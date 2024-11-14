/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjose-ma <rjose-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:37:00 by rafael            #+#    #+#             */
/*   Updated: 2024/11/14 16:16:28 by rjose-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_process_variables(char type, va_list args)
{
	if (type == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (type == 'p')
		return (ft_dec_to_hex_pointer(va_arg(args, unsigned long)));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(args, long)));
	else if (type == 'u')
		return (ft_putnbr_u(va_arg(args, unsigned long)));
	else if (type == 'x')
		return (ft_dec_to_hex(va_arg(args, long), 0));
	else if (type == 'X')
		return (ft_dec_to_hex(va_arg(args, long), 1));
	else if (type == '%')
		return (ft_putchar('%'));
	return (1);
}

int	ft_printf(const char *f, ...)
{
	va_list	list;
	int		count;

	count = 0;
	va_start(list, f);
	if(!f)
		return (-1);
	while (*f)
	{
		if (*f == '%')
		{
			f++;	
			count += ft_process_variables(*(f), list);
			f++;
		}
		else
		{
			f += ft_putchar(f[0]);
			count++; 
		}
	}
	va_end(list);
	return (count);
}
