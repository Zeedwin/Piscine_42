/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:22:35 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/09 22:22:37 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == ' ' || c == '\r' || c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	if (ft_isspace(str[i] == 1))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = 10 * res + (str[i] - '0');
		i++;
	}
	return (sign * res);
}
/*int main ()
{
	char str1[] = "----+-1234";
	int val = ft_atoi(str1);
	printf ("%d ", val);
	return 0; 
}*/
