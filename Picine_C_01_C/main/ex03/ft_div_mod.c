/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:08:03 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/02 15:09:54 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int	a,	int	b,	int	*div, int	*mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int a;
	int b;
	int div;
	int	mod;
	a = 99;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("%d , %d", div, mod);
}	
