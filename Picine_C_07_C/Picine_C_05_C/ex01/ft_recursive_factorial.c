/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:08:54 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/13 22:09:02 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{	
		return (1);
	}
	else if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	int f = atoi(av[1]);
	int result = ft_recursive_factorial(f);
	printf("%d", result);
	return (0);
}
*/