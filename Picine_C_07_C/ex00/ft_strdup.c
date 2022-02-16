/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:29:19 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/15 17:46:49 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char	*dest,	char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char	*str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
	char	*coucou;

	coucou = malloc((ft_strlen(src) + 1) *sizeof(char));
	coucou = ft_strcpy(coucou, src);
	return (coucou);
}

int main()
{
	printf("%s",ft_strdup("asda"));
}