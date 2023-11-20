/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:43:07 by socloza           #+#    #+#             */
/*   Updated: 2023/11/15 19:07:10 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (0);
}
/*
int	main()
{
	char *s = "Hello, world!";
	char *c = ft_strchr(s, 'r'); 
	if (c != NULL)
	{		
		printf("la lettera 'r' si trova al %ld posto.\n", c - s); 
	} 
	else 
	{
		printf("la lettera 'r' non si trova nella stringa.\n");
	}
	return (0);
}*/
