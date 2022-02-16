/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:50:04 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/05 20:52:44 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>

int ft_str_is_lowercase(char *str)

{
	int i;
	i = 0;

	while(str[i])
	{
		if(!((str[i] >= 'a' && str[i] <= 'z')))
			return(0);
			i++;
	}
	return(1);
}
int main ()
{
	int X;
	X = ft_str_is_lowercase("sdfd");
	printf("%d",X);
	return(0);
}

