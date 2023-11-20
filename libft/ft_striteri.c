/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:00:05 by socloza           #+#    #+#             */
/*   Updated: 2023/11/15 22:44:42 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	capitalize(unsigned int i, char *c)
{
	if (i == 0)
	{
		if (*c >= 97 && *c <= 122)
			*c -= 32;
	}
}
int	main(int argc, char **argv)
{
	void	(*f)(unsigned int, char *);
	if (argc > 1)
	f = capitalize;
	ft_striteri(argv[1], f);
	printf("%s\n", argv[1]);
	
}*/