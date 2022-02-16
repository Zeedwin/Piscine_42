/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:46:57 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/05 22:46:59 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>

int ft_str_is_uppercase(char *str)

{
	int i;
	i = 0;

	while(str[i])
	{
		if(!((str[i] >= 'A' && str[i] <= 'Z')))
			return(0);
			i++;
	}
	return(1);
}
int main ()
{
	int X;
	X = ft_str_is_uppercase("sdfd");
	printf("%d",X);
	return(0);
}

