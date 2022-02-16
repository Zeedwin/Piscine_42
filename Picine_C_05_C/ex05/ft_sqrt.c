/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:51:12 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/14 16:51:15 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	res;
	int	sqrt;

	res = 0;
	sqrt = 1;
	while (sqrt <= 4630 && sqrt <= nb)
	{
		res = sqrt * sqrt;
		if (res == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}
