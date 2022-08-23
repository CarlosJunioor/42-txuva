/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:29:08 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/23 17:31:03 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;
    while (argv[0][i] != '\0' && argc)
    {
        ft_putchar(argv[0][i]);
        i++;
    }
    ft_putchar('\n');
    return (0);
}