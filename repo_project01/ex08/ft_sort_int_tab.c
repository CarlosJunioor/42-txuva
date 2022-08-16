/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 19:31:19 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/15 20:41:15 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
void    ft_sort_int_tab(int *tab, int size)
{
    int secondtab[size];
    int count;
    int count2;
    int temp;

    temp = 0;
   
    count = 0;
    count2 = 0;
    
    while (count < size)
    {
       while (count2 < size)
       {
           if (tab[count] > secondtab[count2])
           {
               temp = tab[count];
               tab[count] = secondtab[count2];
               secondtab[count2] = temp;
           }
           count2++;
       }
       count++;
    }
    }
    

int main()
{
    int tab[] = {342, 23, 53, 7, 76, 1};
    int size = 6;
    int counter;

    counter = 0;
    while (counter < size)
    {
        printf("%d ", tab[counter]);
        counter++;
    } 

    ft_sort_int_tab(tab, size);

    printf("AFTER SORT ");

    counter = 0;
    while (counter < size)
    {
        printf("%d ", tab[counter]);
        counter++;
    } 

} 