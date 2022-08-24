/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 18:18:27 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/24 18:27:29 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int main(int argc, char **argv)
{
    int i;
    int x;

    i = 0;
    x = 1;
    while (x < argc)
    {
        i = 0;
        printf(" ");
        while (argv[x][i] != '\0')
        {
            printf("%c", argv[x][i]);
            i++;
        }
        x++;
    }
    return (0);
}