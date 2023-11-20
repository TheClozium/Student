/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:59:46 by socloza           #+#    #+#             */
/*   Updated: 2023/11/15 17:38:46 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int	main()
{
	char	str[] = "ciao sono ...";
	char	str1[] = "hicnj";
	t_list	*i = ft_lstnew(str);
	t_list	*j = ft_lstnew(str1);
	t_list	*str2 = NULL;
	ft_lstadd_front(&str2, i);
	ft_lstadd_front(&str2, j);
	printf("%s\n", (char *)str2 -> content);
	printf("%s\n", (char *)str2 -> next -> content);
	return (0);
}
*/
