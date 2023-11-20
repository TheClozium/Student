/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofia <sofia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:23:12 by socloza           #+#    #+#             */
/*   Updated: 2023/11/18 20:30:28 by sofia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	k;
	int	segno;
	int	risultato;

	k = 0;
	while ((str[k] >= 9 && str[k] <= 13) || (str[k] == 32))
	{
		k++;
	}
	segno = 1;
	if (str[k] == '+' || str[k] == '-')
	{
		if (str[k] == '-')
			segno *= -1;
		k++;
	}
	risultato = 0;
	while (str[k] >= 48 && str[k] <= 57)
	{
		risultato = risultato * 10 + (str[k] - 48);
		k++;
	}
	return (risultato * segno);
}
/*
int	main()
{
	char	s[] = "---135565";
	printf("%d\n", ft_atoi(s));
}*/
