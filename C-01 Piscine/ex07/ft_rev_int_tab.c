/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:52:46 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/16 15:49:03 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	secondtab[size];
	int	count;

	count = 0;
	while (count < size)
	{
		secondtab[count] = *(tab + (size - 1 - count));
		count++;
	}
	count = 0;
	while (count < size)
	{
		tab[count] = secondtab[count];
		count++;
	}
}

/*
int		main(void)
{
	int tab[] = {100, 200, 300, 400, 500, 600, 700};
	int size = 7;
	int counter;
	
	counter = 0;
	while(counter < size)
	{
		printf("%d ", tab[counter]);
		counter++; 
	}

	printf("  |  ");
    ft_rev_int_tab(tab, size);
	
	counter = 0;
	while(counter < size)
	{
		printf("%d ", tab[counter]);
		counter++; 
	}
    return (0);
}
*/