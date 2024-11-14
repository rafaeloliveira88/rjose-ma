/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjose-ma <rjose-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:46:08 by mlameira          #+#    #+#             */
/*   Updated: 2024/11/14 13:23:42 by rjose-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	//Tests:
	printf("Inicial Test[1]:");
	int a = 42;
	printf("\nTesting with %%d:\n");
	ft_printf("ft_printf: %d\t", a);
	printf("Original: %d\t", a);
	
	printf("\nTest[2]:");
	printf("Testing with %%i\n");
	ft_printf("ft_printf: %i\t", a);
	printf("Original: %i\t", a);
	char *dest = "42 programing school";
	printf("\nTest[3]:");
	printf("Testing with %%c\n");
	ft_printf("ft_printf: %c\t", dest[0]);
	printf("Original: %c\t", dest[0]);
	
	printf("\nTest[4]:");
	printf("Testing with %%s\n");
	ft_printf("ft_printf: %s\t", dest);
	printf("Original: %s\t", dest);
	
	printf("\nTest[5]:");
	printf("Testing with %%u\n");
	ft_printf("ft_printf: %u\t", a);
	printf("Original: %u\t", a);

	void *ptr = (void *)42;
	printf("\nTest[6]:");
	printf("Testing with %%p\n");
	ft_printf("ft_printf: %p\t", ptr);
	printf("Original: %p\t", ptr);
	
	printf("\nTest[7]:");
	printf("Testing with %%x\n");
	ft_printf("ft_printf: %x\t", a);
	printf("Original: %x\t", a);

	printf("\nTest[8]:");
	printf("Testing with %%X\n");
	ft_printf("ft_printf: %X\t", a);
	printf("Original: %X\t", a);

	printf("\nTest[9]:");
	printf("Testing with %%%%\n");
	ft_printf("ft_printf: %%\t");
	printf("Original: %%\t");
	
	printf("\nTest[10]:");
	int b = printf("Testing returns\n");
	int c = ft_printf("ft_printf: %d\t", b);
	printf("Original: %d\t", b);

	printf("\nTest[11]:");
	printf("Testing ft_printf returns\n");
	ft_printf("ft_printf: %d\t", c);
	printf("Original: %d\t", c);

	printf("\nTest[12]:");
	printf("Testing %%d with INT_MAX\n");
	ft_printf("ft_printf: %d\t", INT_MAX);
	printf("Original: %d\t", INT_MAX);
	
	printf("\nTest[13]:\n");
	printf("Testing with null\n");
	printf(NULL);
	ft_printf(NULL);
	
	printf("\nTest[14]:\n");
	printf("Testing with null as parameter\n");
	ft_printf("ft_printf: %d\t", ft_printf(NULL));
	printf("Original: %d\t", printf(NULL));

	printf("\nTest[15]:");
	printf("Testing %%d with INT_MIN\n");
	ft_printf("ft_printf: %d\t", INT_MIN);
	printf("Original: %d\t", INT_MIN);

	printf("\nTest[16]:");
	printf("Testing %%x with INT_MAX\n");
	ft_printf("ft_printf: %x\t", INT_MAX);
	printf("Original: %x\t", INT_MAX);

	printf("\nTest[17]:");
	printf("Testing %%i with INT_MAX\n");
	ft_printf("ft_printf: %d\t", INT_MAX);
	printf("Original: %d\t", INT_MAX);

	printf("\nTest[18]:");
	printf("Testing %%s with unsgined chars\n");
	unsigned char uc = 'f';
	ft_printf("ft_printf: %c\t", uc+12);
	printf("Original: %c\t", uc+12);

	printf("\nTest[19]:");
	printf("Testing %%s with multiple strings\n");
	char *lb = "for learning";
	ft_printf("ft_printf: %s %s\t", dest, lb);
	printf("Original: %s %s\t", dest, lb);
	
	printf("\nTest[20]:");
	printf("Testing %%s with multiple strings\n");
	unsigned char *rb = "for learning";
	a = INT_MAX;
	b = 233;
	long pt = (a*b);
	ft_printf("ft_printf: %x %p\t", (void *)rb, (int)pt);
	printf("Original: %x %p\t", (void *)rb, (int)pt);
	
	return 0;
}
