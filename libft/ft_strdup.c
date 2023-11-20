/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:09:29 by socloza           #+#    #+#             */
/*   Updated: 2023/11/06 17:28:13 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*src2;
	int		k;
	int		j;

	k = 0;
	while (src[k] != '\0')
	{
		k++;
	}
	src2 = (char *)malloc(k + 1);
	if (src2 == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (src[j] != '\0')
	{
		src2[j] = src[j];
		j++;
	}
	src2[j] = '\0';
	return (src2);
}
/*
int	main()
{
	printf("%s", ft_strdup("ciao merde"));
}*/
