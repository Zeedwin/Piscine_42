/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:08:32 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/08 16:23:57 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n && s1[i] && s2[i] && (s1[i] == s2[i])))
	{
		i++;
	}
	if (i == n)
		return (0);
	if (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		return (0);
	}
	else
		return (s1[i] - s2[i]);
}
/*int main ()
{
    char s1[] = "sqwdasqye";
    char s2[] = "sqwdasqqr";
    printf("%d\n", ft_strncmp(s1, s2, 8));
	printf("%d\n", strncmp (s1, s2, 8));
	return (0);
}*/
