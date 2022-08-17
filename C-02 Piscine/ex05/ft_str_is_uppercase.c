/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:21:05 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/17 18:24:04 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>

int ft_str_is_printable(char *str)
{
    unsigned int count;
    
    count = 0;
    while (str[count] != '\0')
    {
        if (str[count] < 32 || str[count] > 126)
            return (0);
            count++;
    }
    return (1);
}

int main ()
{
    
}