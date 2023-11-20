/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:03:39 by socloza           #+#    #+#             */
/*   Updated: 2023/11/15 18:02:32 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int	main()
{
	char	str[] = "weweweewwe";
	char	str1[] = "boh";
	t_list	*i = ft_lstnew(str);
	t_list	*j = ft_lstnew(str1);
	t_list	*str2 = NULL;
	ft_lstadd_back(&str2, i);
	ft_lstadd_back(&str2, j);
	printf("%s\n", (char *)str2 -> content);
	printf("%s\n", (char *)str2 -> next -> content);
	return (0);
}
*/
