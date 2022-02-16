/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:39:55 by jgirard-          #+#    #+#             */
/*   Updated: 2022/02/05 13:52:52 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
int i;
int temp;
int j;

i = 0;
j = i + 1;
while (i < size)
{
    j = i +1;
    while (j < size) 
    {
        if (tab[i] > tab[j])
        {
            temp = tab[i];
            tab[i] = tab[j];
            tab[j] = temp;
        }
        j++;
    }
    i++;
}
}
int main(void)

{
int i = 0;
int tab[8] = {8, 14, 22, 7, 7, 2 , 11, 2};
ft_sort_int_tab(tab, 8);
    while (i < 8)
    {
        printf("%d", tab[i]);
        i++;
    }
}
