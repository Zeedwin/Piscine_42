/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:06:27 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/16 19:09:47 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include<stdio.h>

int *ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min > max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

int	main()
{
	int *res;

	res = ft_range(-12, 5);
	int	i;

	i = 0;
	while (i < 5 - (-12))
	{
		printf("%d ", res[i]);
		i++;
	}
}
