/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 09:42:13 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/10 09:42:19 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) && s1[i] == s2[i])
	{	
			i++;
	}
	if ((s1[i] && s2[i]) && (s1[i] == s2[i]))
	{
		return (0);
	}
	else
		return (s1[i] - s2[i]);
}
/*int main()
{
	char s1[] = "afadf";
	char s2[] = "afadf";
	printf("%d\n",ft_strcmp(s1, s2));
	printf("%d\n", strcmp (s1, s2));
}*/