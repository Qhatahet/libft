/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 22:37:01 by qhatahet          #+#    #+#             */
/*   Updated: 2024/09/13 17:28:02 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
int	main(void)
{
	char	s[] = "string";

	printf("%s\n", s);
	ft_bzero(s, 4);
	write(1, s,  3);
	write(1, "\n", 1);
	return (0);
}*/
