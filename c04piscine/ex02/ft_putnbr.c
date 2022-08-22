/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:43:54 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/22 20:12:06 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void putchar(char c)
{
    write(1, c, 1);
}
void ft_putnbr(int nb)
{
    if (nb == -2147483647)
    {
        putchar('-');
        putchar('2');
        ft_putnbr(147483647);
    }
    
    return (0);
}

int main()
{
    ft_putnbr(42);
}