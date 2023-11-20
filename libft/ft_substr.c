/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 23:05:40 by socloza           #+#    #+#             */
/*   Updated: 2023/11/13 16:26:43 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (start >= ft_strlen(s))
	{
		start = ft_strlen(s);
		len = 0;
	}
	if (len + start > ft_strlen(s))
	{
		len = ft_strlen(s) - start;
	}
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
/*
int	main()
{
	const char *prima_stringa = "Hey, cazzo guardi!";
    unsigned int start_index = 5;
    size_t substring_length = 5;

    char *result = ft_substr(prima_stringa, start_index, substring_length);

    if (result != NULL) 
	{
        printf("stringa originale: %s\n", prima_stringa);
        printf("sottostringa estratta: %s\n", result);
    } else 
	{
        printf("fai cagare.\n");
    }
    return 0;
}*/
