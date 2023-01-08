/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 05:19:26 by ede-oliv          #+#    #+#             */
/*   Updated: 2023/01/07 05:20:32 by ede-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prev;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		prev = *lst;
		*lst = prev->next;
		ft_lstdelone(prev, del);
	}
}
