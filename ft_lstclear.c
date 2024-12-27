/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:26:26 by qhatahet          #+#    #+#             */
/*   Updated: 2024/09/17 11:28:52 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (*lst && lst)
	{
		ft_lstclear(&(*lst)->next, del);
		ft_lstdelone(*lst, del);
		*lst = 0;
	}
}
