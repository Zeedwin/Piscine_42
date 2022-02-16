/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:26:09 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/07 18:53:53 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





#include <stdio.h>

char	*ft_strncpy(char *dest,	char	*src, unsigned int n)
{
	unsigned int i;
	i = 0;
	while(i < n && src[i] != '\0')
	{
		 dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
int main ()
{
	char dest[11] = "oooooooooo";
	char src[11] = "sdasdgdasvd";
	printf("%s", ft_strncpy(dest, src, 8));
}
