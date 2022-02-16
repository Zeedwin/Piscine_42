/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:51:22 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/13 16:51:43 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	i;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	i = nb;
	while (nb > 1)
	{
		nb--;
		i *= nb;
	}
	return (i);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(7));
}
*/
