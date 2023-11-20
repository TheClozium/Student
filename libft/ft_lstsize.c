/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:00:57 by socloza           #+#    #+#             */
/*   Updated: 2023/11/15 17:47:44 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst != NULL)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}
/*
int	main()
{
	t_list	*i = (t_list *)malloc(sizeof(t_list));
	t_list	*q = (t_list *)malloc(sizeof(t_list));
	t_list	*k = (t_list *)malloc(sizeof(t_list));
	i -> content = "ca";
	q -> content = "";
	k -> content = "t";
	i -> next = q;
	q -> next = NULL;
	k -> next = NULL;
	if (ft_lstsize(i) != 0)
	{
		printf("%d\n", ft_lstsize(i));
	}
	else
	{
		printf("fai cagare");
	}
	return (0);
}*/
