/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:29:08 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/23 19:08:28 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int main (int argc, char **argv)
{
    int i;

    i = 0;
    printf("Numero de Argumentos: %d\n", argc);
    while (argv[0][i] != '\0')
    {
        printf("%c", argv[1][i]);
        i++;
    }
    return (0);
}
