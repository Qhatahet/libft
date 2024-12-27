/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:48:43 by qhatahet          #+#    #+#             */
/*   Updated: 2024/09/15 12:02:05 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

int	ft_lstsize(t_list *lst)
{
	int				i;
	struct s_list	*current;

	i = 0;
	current = lst;
	while (current != NULL)
	{
		current = current ->next;
		i++;
	}
	return (i);
}
