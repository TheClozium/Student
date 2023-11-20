/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:22:16 by socloza           #+#    #+#             */
/*   Updated: 2023/11/06 16:57:48 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	i = 0;
	str = (const char *)s;
	while (i < n)
	{
		if (str[i] == (char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	const char	*str = "Ciao belli!";
	char	find = 'e';
	size_t	bytes = strlen(str);
	const void	*result = ft_memchr(str, find, bytes);

	if (result != NULL)
	{
		printf("%s\n", (char *)result);
	}
	else{
		printf("niente da fare");
	}
	return (0);
}*/