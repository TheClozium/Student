/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:06:45 by socloza           #+#    #+#             */
/*   Updated: 2023/11/15 19:02:03 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void *modifica_contenuto(void *valore_nodo)
{
    int *valore = (int *)valore_nodo;
    *valore += 100;
    return valore_nodo;
}

int main()
{
	t_list *head;
	t_list *nodo;
	t_list *newhead;
	int x = 10;
	int y = 20;
	
	head = ft_lstnew(&x);
	nodo = ft_lstnew(&y);
	ft_lstadd_back(&head, nodo);
	newhead = ft_lstiter(head, modifica_contenuto);

	while(newhead)
	{
	 int *valore = (int *)newhead->content;
        printf("%d\n", *valore);
        newhead = newhead->next;
	}
	return (0);
}*/
