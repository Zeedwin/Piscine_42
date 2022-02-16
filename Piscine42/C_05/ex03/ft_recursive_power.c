/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:55:57 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/14 14:56:00 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power >= 1)
		return (nb * ft_recursive_power(nb, power -1));
	return (0);
}
/*
int main()
{
	unsigned int i;

	printf("%d", ft_recursive_power(7, 4));
	return (0);
}
*/