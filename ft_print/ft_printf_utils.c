/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:51:01 by socloza           #+#    #+#             */
/*   Updated: 2023/11/23 20:19:56 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i++], 1);
	}
	return (i);
}
int	ft_putnbr(long n)
{
	int	i;

	i = 0;
	if (n <= -2147483648)
	{
		return (ft_putstr("-2147483648"));
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
		i++;
	}
	if (n < 10)
	{
		i += ft_putchar(n + 48);
	}
	else
	{
		i += ft_putnbr(n / 10);
		i += ft_putchar((n % 10) + 48);
	}
	return (i);
}

int	ft_print_digits(long n, int base)
{
	char	*str;
	int		counter;
	int		i;

	i = 0;
	str = "0123456789abdefg";
	while (n < 0)
	{
		write (1, "-", 1);
		return (ft_print_digits(-n, base) + 1);
		i++;
	}
	if (n < base)
	{
		return (ft_putchar(str[n]));
	}
	else 
  	{
    	counter = ft_print_digits(n / base, base);
    }
	return (counter + ft_print_digits(n % base, base));
}

int	ft_print_digits_grandi(long n, int base)
{
	char	*str;
	int		counter;
	int		i;

	i = 0;
	counter = 0;
	str = "0123456789ABCDEFG";
	while (n < 0)
	{
		write (1, "-", 1);
		return (ft_print_digits_grandi(-n, base) + 1);
		i++;
	}
	if (n < base)
	{
		return (ft_putchar(str[n])); 
	}
	else
    {
        counter += ft_print_digits_grandi(n / base, base);
		counter += ft_print_digits_grandi(n % base, base);
    }
	return (counter);
}

int	ft_pointer_numhex(uintptr_t ptr, int index)
{
	int		i;
	char	*num_hex_low;

	num_hex_low = "0123456789abcdef";
	i = 0;
	if (!ptr && !index)
		return (ft_putstr("(nil)"));
	if (index == 0)
		i += ft_putstr("0x");
	if (ptr >= 16)
	{
		i += ft_pointer_numhex(ptr / 16, 1);
		i += ft_pointer_numhex(ptr % 16, 1);
	}
	else
		i += ft_putchar(num_hex_low[ptr]);
	return (i);
}