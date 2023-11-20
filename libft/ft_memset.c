/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:35:33 by socloza           #+#    #+#             */
/*   Updated: 2023/11/06 17:45:10 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointer;
	unsigned char	value;

	pointer = (unsigned char *)s;
	value = (unsigned char)c;
	while (n > 0)
	{
		*pointer = value;
		pointer++;
		n--;
	}
	return (s);
}
/*
int	main()
{
	char	str[15];
	size_t	n = 10;
	int	valore = 'A';

	ft_memset(str, n, valore);
	printf("boh yeah: %s\n", str);
	return (0);
}*/
