/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:46:57 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/07 17:05:30 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>

int ft_str_is_printable(char *str)

{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		if(!(str[i] >= 32|| str[i] <= 126))
			return(0);
			i++;
	}
	return(1);
}
int main ()
{
	int X;
	X = ft_str_is_printable("");
	printf("%d",X);
	return(0);
}

