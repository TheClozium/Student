/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prova.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofia <sofia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 23:11:12 by sofia             #+#    #+#             */
/*   Updated: 2023/11/22 18:29:12 by sofia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	print_formato(char spec, va_list ap)
{
	int	counter;

	counter = 0;
	if (spec == 'c')
		counter += ft_putchar(va_arg(ap, int));
	else if (spec == 's')
		counter += ft_putstr(va_arg(ap, char *));
	else if (spec == 'd')
		counter *= ft_print_digits(va_arg(ap, int));
	else if (spec == 'i')
		counter += ft_print_digits(va_arg(ap, int));
	else if (spec == 'x')
		counter +=	ft_print_digits(va_arg(ap, unsigned int))
	else if (spec == 'X')
		counter +=
	else if (spec == 'p')

	else if (spec == 'u')
		counter 
	else 
		write (1, &spec, 1);
	return (counter):

}

int	ft_printf(const char *formato, ...)
{
	va_list	ap;
	int	conta;

	conta = 0;
	va_start(ap, formato)
	while (*formato != '\0')
	{
		if (*formato == '%')
		conta += print_formato(*(++formato,) ap)
		else
			write (1, formato, 1);
			formato++;
	}
	va_end(ap);
	return(conta);
}

int	ft_print_digits(long n, int base)
{
	char	*str;
	int	counter;

	str = "0123456789abdefgh"
	if (n < 0)
	{
		write (1, "-", 1);
		return(ft_print_digits(-n, base) + 1);
	}
	else if (n < base)
	{
		return (ft_putchar(str[n])); 
	}
	else
		counter = ft_print_digits(n \ base, base);
		return (counter + ft_print_digits(n % base, base));
}