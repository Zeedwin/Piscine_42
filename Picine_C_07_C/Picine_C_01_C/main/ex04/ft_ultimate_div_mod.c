/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 21:30:56 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/01 22:43:59 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int	*a,	int	*b)
{
	int	c;
	int	d;
	c = *a;
	d = *b;

	*a = c / d;
	*b = c % d;
}

int main(void)
{
	int a;
	int b;
	int	c;
	int	d;
	c = 5;
	d = 2;
	ft_ultimate_div_mod(&c, &d);
	printf("%d , %d", c, d);
}
