/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:09:22 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/05 17:54:17 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)

{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= '0') && (str[i] <= '9'))
		i++;
		else return (0);
	}
	return(1);
}
int main ()
{
	int X;
	X = ft_str_is_numeric("885rfgsdf5");
	printf("%d",X);
	return(0);
}

