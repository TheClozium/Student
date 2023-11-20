/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socloza <socloza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:04:46 by socloza           #+#    #+#             */
/*   Updated: 2023/11/15 19:01:32 by socloza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void del(void *content)
{
        free (content);
}

int	main()
{
    t_list *lista = NULL;
    char *str = ft_strdup("ciao");
    t_list *nodo = ft_lstnew(str);
    ft_lstadd_back(&lista, nodo);
    ft_lstdelone(nodo, del);
    printf("%p\n", (char *)lista->content);
    return (0);
}*/