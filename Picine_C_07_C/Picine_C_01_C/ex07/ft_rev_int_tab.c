/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:55:45 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/03 15:10:15 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int	*tab, int size)
{
	int	tmp;
	int	i;
	int	revi;

	i = 0;
	revi = size - 1;
	while (i < (size / 2))
	{
		tmp = tab[revi - i];
		tab[revi - i] = tab[i];
		tab[i] = tmp;
		i++;
	}
}
