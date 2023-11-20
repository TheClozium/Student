/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:22:05 by socloza           #+#    #+#             */
/*   Updated: 2023/11/15 19:02:31 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}
	d = (char *)dest;
	s = (char *)src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
/*
int main()
{
    char source[] = "Tua mamma!";
    char destination[20];

    ft_memcpy(destination, source, 10);

    destination[10] = '\0';

    printf("stringa copiata: %s\n", destination);

    return 0;
}*/
