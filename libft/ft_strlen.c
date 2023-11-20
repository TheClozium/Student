/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:25:03 by socloza           #+#    #+#             */
/*   Updated: 2023/11/15 18:39:12 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	k;

	k = 0;
	while (str[k] != '\0')
	{
		k++;
	}
	return (k);
}
/*
int	main()
{
	char	str[] = "tua mamma hahah!!!";
	printf("%ld\n", ft_strlen(str));
}
*/