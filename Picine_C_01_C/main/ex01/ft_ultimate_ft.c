/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:38:37 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/01 16:17:00 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void 	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
	
int main()
{
	int a;
	int *********nbr;
	int ********nbr8;
	int *******nbr7;
	int ******nbr6;
	int *****nbr5;
	int ****nbr4;
	int ***nbr3;
	int **nbr2;
	int *nbr1;
	
	nbr1 = &a;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr = &nbr8;
	ft_ultimate_ft(nbr);
	printf("%d", a);
}
