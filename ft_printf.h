/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjose-ma <rjose-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:45:36 by rafael            #+#    #+#             */
/*   Updated: 2024/11/14 16:15:08 by rjose-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft/libft.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_putnbr_u(unsigned int n);
int	ft_dec_to_hex_pointer(unsigned long number);
int	ft_dec_to_hex(unsigned int number, int uppercase);
int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);