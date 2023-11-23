/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 23:11:12 by sofia             #+#    #+#             */
/*   Updated: 2023/11/23 20:21:59 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
   		write (1, &c, 1);
    	return (c);
}

int	print_str(char spec, va_list ap)
{
	int	counter;

	counter = 0;
	if (spec == 'c')
		counter += ft_putchar(va_arg(ap, int));
	else if (spec == 's')
		counter += ft_putstr(va_arg(ap, char *));
	else if (spec == 'd' || spec == 'i')
		counter += ft_putnbr(va_arg(ap, long));
	else if (spec == 'x')
		counter += ft_print_digits(va_arg(ap, unsigned int), 16);
	else if (spec == 'X')
		counter += ft_print_digits_grandi(va_arg(ap, unsigned int), 16);
	else if (spec == 'p')
		counter += ft_print_digits((unsigned long)va_arg(ap, void *), 16);
	else if (spec == 'u')
		counter += ft_putnbr(va_arg(ap, long));
	else 
		write (1, &spec, 1);
	return (counter);
}
int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int	conta;

	conta = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		conta += print_str(*(++str), ap);
		else
		{
			write (1, str, 1);
		}
		str++;
	}
	va_end(ap);
	return (conta);
}
#include <stdio.h>
int	main()
{
	ft_printf("ciao %s, ho %i anni, e niente beccati quest %X\n", "merde", 42, 42);
	printf("%i", ft_printf("ciao %s, ho %i anni, e niente beccati quest %X\n", "merde", 42, 42));
	printf("ciao %s, ho %i anni, e niente beccati quest %X\n", "merde", 42, 42);
}
