/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:43:54 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/22 19:59:41 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void put_char(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int nb)
{
    if (nb >= 0 && nb < 10)
    {
        put_char(nb + '0');
    }else
    if (nb < 0)
    {
        putchar('-');
        ft_putnbr(nb*(-1));
    }else
    {
        ft_putnbr(nb/10);
        ft_putnbr(nb%10);
    }
}

int main()
{
    ft_putnbr(42);
}