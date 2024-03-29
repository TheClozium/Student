/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:45:37 by socloza           #+#    #+#             */
/*   Updated: 2023/11/15 18:29:06 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int k)
{
	if (k >= '0' && k <= '9')
	{
		return (1);
	}
	return (0);
}
/*
int	main()
{
	int	num = 1;
	printf("%d\n", ft_isdigit(num));
}*/