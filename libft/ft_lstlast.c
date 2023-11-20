/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:02:29 by socloza           #+#    #+#             */
/*   Updated: 2023/11/15 17:55:31 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main()
{
	t_list	*i = (t_list *)malloc(sizeof(t_list));
	t_list	*k = (t_list *)malloc(sizeof(t_list));
	t_list	*q = (t_list *)malloc(sizeof(t_list));
	i -> content = "la prima";
	k -> content = "la seconda";
	q -> content = "l'ultima";
	i -> next = k;
	k -> next = q;
	q -> next = NULL;
	if (ft_lstlast(i) != NULL)
	{
		printf("%s\n", (char *)ft_lstlast(i) -> content);
	}
	else
	{
		printf("ahahah");
	}
	return (0);
}*/