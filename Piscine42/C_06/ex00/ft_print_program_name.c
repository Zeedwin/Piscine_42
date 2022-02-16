/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:12:15 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/10 18:12:33 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	j;

	(void) argc;
	j = 0;
	while (argv[0][j] != '\0')
	{
		ft_putchar(argv[0][j]);
		j++;
	}
	ft_putchar('\n');
}
