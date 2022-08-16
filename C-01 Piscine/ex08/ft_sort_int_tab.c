/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 19:31:19 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/16 15:58:35 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	countera;
	int	counterb;
	int	change;

	countera = 0;
	while (countera < size)
	{
		counterb = 0;
		while (counterb < size)
		{
			if (tab[counterb] >= tab[countera])
			{
				change = tab[counterb];
				tab[counterb] = tab[countera];
				tab[countera] = change;
			}
			counterb++;
		}
		countera++;
	}
}


int main(void)
{
    int tab[] = { 30,5,2,3,4,8,16,20,243,234,456,456,64577, - 10};
    int lenght = sizeof(tab)/sizeof(tab[0]);
    ft_sort_int_tab(tab, lenght);
	int i = 0;
	
	while (i < lenght)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
