/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:02:00 by socloza           #+#    #+#             */
/*   Updated: 2023/11/06 17:19:01 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*uno;
	const unsigned char	*due;
	size_t				i;

	i = 0;
	uno = (const unsigned char *)s1;
	due = (const unsigned char *)s2;
	while (i < n)
	{
		if (uno[i] != due[i])
		{
			return (uno[i] - due[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	str1[] = "cax";
	char	str2[] = "";
	size_t	n = 5;
	int	result = ft_memcmp(str1, str2, n);

	if (result == 0)
	{
		printf("sono uguali");
	}
	else if (result < 0)
	{
		printf("la seconda memoria e' piu' grande");
	}
	else
	{
		printf("la prima e' piu' grande");
	}
	return (0);
}*/
