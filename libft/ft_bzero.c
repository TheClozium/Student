/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:21:30 by socloza           #+#    #+#             */
/*   Updated: 2023/11/15 18:14:01 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;
	size_t			i;

	c = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*(c + i) = 0;
		i++;
	}
}
/*
}
	ft_memset(s, 0, n);
}*/
/*
int	main()
{
	char	str[] = "CIao belli!";
	size_t	bytes = 10;
	printf("la stringa originale: %s\n", str);
	if (bytes <= strlen(str))
	{
		ft_bzero(str, bytes);
		printf ("dopo bzer: %s\n", str);
	}
	else
	{
		printf("niente da fare");
	}
	return (0);
}*/
