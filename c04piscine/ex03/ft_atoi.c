/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 22:53:36 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 22:53:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int ft_atoi(char *str)
{
    int count_a;
    int count_b;
    char numb[] = "";

    count_a = 0;
    while (str[count_a] != '\0')
    {
        if (str[count_a] == '-')
        {
            count_b++;
        }
        if (str[count_a] >= '0' && str[count_a] <= '9')
        {
            numb = numb + str[count_a];
        }

        printf("%s", numb);
        write(1, &str[count_a], 1);
        count_a++;
    }
    return (0);
}

int main ()
{
    char string[] = " ---+--+1234ab567";

    printf("%s ", ft_atoi(string));
}