/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:02:16 by socloza           #+#    #+#             */
/*   Updated: 2023/11/13 12:50:22 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
/*{
	const char	*last;

	last = (NULL);
	while (*s != '\0')
	{
		if (*s == c)
		{
			last = s;
		}
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	if (last == NULL)
		return (NULL);
	return ((char *)last);
}*/

{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
	const char	*last;

	last = NULL;
	if (c != '\0')
	{
		while (*s != '\0')
		{
			if (*s == c)
			{
				last = s;
			}
			s++;
		}
	}
	if (*last == c || last != NULL)
	{
		return ((char *)last);
	}
	if (c == '\0' && *s == '\0')
	{
		return ((char *)s);
	}
	return ((char *)last);
}*/
/*
int	main() 
{
  const char *s1 = "";
  const char *s2 = "Hello, world!";
  const char *s3 = "muori";

  char *c1 = ft_strrchr(s1, 'a');
  char *c2 = ft_strrchr(s2, 'e');
  char *c3 = ft_strrchr(s3, 'u');

  printf("c1: %s\n", c1);
  printf("c2: %s\n", c2);
  printf("c3: %s\n", c3);

  return 0;
}*/
