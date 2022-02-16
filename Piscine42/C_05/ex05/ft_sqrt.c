/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:51:12 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/15 15:50:06 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	res;
	int	sqrt;

	res = 0;
	sqrt = 1;
	while (sqrt <= 46340)
	{
		res = sqrt * sqrt;
		if (res == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_sqrt(2147395601));
}
*/