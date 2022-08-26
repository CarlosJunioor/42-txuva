/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 20:18:56 by marvin            #+#    #+#             */
/*   Updated: 2022/08/26 20:18:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_write_number(int number)
{
    if (number > 9)
            ft_write_number(number / 10);
            write(1, &"0123456789"[number % 10], 1);
}

int main (void)
{
    int number;
    
    number = 1;
    while (number <= 100)
    {
        ft_write_number(number);
        write(1, "\n", 1);
        number++;
    }
}