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
	while ((i < n && s1[i] == s2[i])
		|| (s1[i] != '\0' && s2[i] != '\0' && n == '\0'))
	{
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else
		return (s1[i] - s2[i]);
}
/*int main ()
{
    char s1[] = "sqwa";
    char s2[] = "sqwdas";
    printf("%d", ft_strncmp(s1, s2, 4));
	return (0);
}*/
