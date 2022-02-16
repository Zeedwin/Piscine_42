/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:26:35 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/02 19:34:13 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char	*str)
{

	int	i;
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int main (void)
{
	int i;
	char *str = "sdas";
	i = ft_strlen(str);
	printf("%d" , i);
	return (0);
}	
