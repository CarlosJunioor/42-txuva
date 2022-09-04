/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:14:36 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/25 16:30:57 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_print_numbers(void)
{
    char n;

    n = 0;
    while(n <= '9')
    {
        ft_putchar(n);
        n++;
    }
}

int main()
{
    ft_print_numbers();
    ft_print_numbers();
    return (0);
}