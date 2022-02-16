/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:47:12 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/14 16:02:44 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index <= 1)
		return (index);
	return (ft_fibonacci (index -1) + ft_fibonacci (index -2));
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	int f = atoi(av[1]);
	int result = ft_fibonacci(f);
	printf("%d", result);
	return (0);
}
*/