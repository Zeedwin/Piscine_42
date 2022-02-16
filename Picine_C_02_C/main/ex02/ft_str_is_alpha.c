/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:09:22 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/05 18:04:27 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)

{
	int i;
	i = 0;

	while(str[i])
	{
		if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
			return(0);
			i++;
	}
	return(1);
}
int main ()
{
	int X;
	X = ft_str_is_alpha("da\nsdfw56116ssd");
	printf("%d",X);
	return(0);
}

