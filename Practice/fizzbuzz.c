/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 20:18:56 by marvin            #+#    #+#             */
/*   Updated: 2022/08/26 20:18:56 by marvin           ###   ########.fr       */
=======
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:07:30 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/25 22:00:36 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

<<<<<<< HEAD
void ft_write_number(int number)
{
    if (number > 9)
            ft_write_number(number / 10);
            write(1, &"0123456789"[number % 10], 1);
}

int main (void)
    int number;
    
    number = 1;
    while (number <= 100)
        write(1, "a", 1);
void    ft_write_number(int number)
{
    if (number > 9)
        ft_write_number(number / 10);
        write(1, &"0123456789"[number % 10], 1);
}

int main(void)
{
    int number;

    number = 1;
    while (number <= 100)
    {
        if (number == )
        ft_write_number(number);
        write(1, "\n", 1);
        number++;
    }
}