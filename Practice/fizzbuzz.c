/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 22:40:31 by marvin            #+#    #+#             */
/*   Updated: 2022/08/27 22:40:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_write_numbers(int number)
{
    if (number > 9)
    ft_write_numbers(number / 10);
    write(1, &"0123456789"[number % 10], 1);
}

int main ()
{
    int i;

    i = 0;
    while (i <= 100)
    {
        
    return 0;
}