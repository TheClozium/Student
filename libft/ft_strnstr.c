/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:11:55 by socloza           #+#    #+#             */
/*   Updated: 2023/11/15 18:43:10 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
	{
		return ((char *)big);
	}
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
			{
				return ((char *)&big[i]);
			}
		}
		i++;
	}
	if (big[i] == '\0' || i >= len)
		return (NULL);
	return (NULL);
}
/*
int main()
{
    const char *big = "bifrhj huejovmwkv'.";
    const char *little = "bifrhj";
    size_t len = 20; // Maximum length to search within big.

    char *result = ft_strnstr(big, little, len);

    if (result != NULL)
    {
        printf("%s\n", result);
    }
    else
    {
        printf("eh oh.\n");
    }

    return 0;
}*/
