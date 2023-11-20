/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:05:39 by socloza           #+#    #+#             */
/*   Updated: 2023/11/15 18:10:14 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*current;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}

// int	main()
// {
// 	t_list	*i = (t_list *)malloc(sizeof(t_list));
// 	t_list	*q = (t_list *)malloc(sizeof(t_list));
// 	t_list	*k = (t_list *)malloc(sizeof(t_list));
// 	i -> content = "ciao";
// 	q -> content = "we";
// 	k -> content = "bella";
// 	i -> next = q;
// 	q -> next = k;
// 	k -> next = NULL;
// 	ft_lstclear(&i, del);
// 	if (i == NULL)
// 	{
// 		printf("good job dude");
// 	}
// 	else
// 	{
// 		printf("fai cagare");
// 	}
// 	return (0);
// }
