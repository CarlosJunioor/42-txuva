/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:27:17 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/22 19:35:02 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void ft_putstr(char *str)
{
    int count;

    count = 0;
    while (str[count] != '\0')
    {
        write(1, &str[count], 1);
        count++;
    }
}

int main()
{
    char string[] = "helloworld";
    
    ft_putstr(string);
    
}