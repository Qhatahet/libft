/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:10:58 by qhatahet          #+#    #+#             */
/*   Updated: 2024/09/15 14:59:52 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	struct s_list	*current;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	current = ft_lstlast(*lst);
	current ->next = new;
}
