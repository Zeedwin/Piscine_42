/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowercase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:06:19 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/06 16:08:36 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

char *ft_strupcase(char *str)

{
	int i;
	i = 0;

	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return(str);
}
int main()
{
	char str[]= "SDA";
	ft_strupcase(str);
	printf("%s",str);
}

