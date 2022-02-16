/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:03:19 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/06 14:08:05 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>

char *ft_strupcase(char *str)

{
	int i;
	i = 0;

	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return(str);
}
int main()
{
	char str[]= "asdasdasgfe 8787";
	ft_strupcase(str);
	printf("%s",str);
}

