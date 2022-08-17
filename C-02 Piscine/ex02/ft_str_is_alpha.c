/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:40:36 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/17 16:49:34 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_alpha(char *str)
{
    while (str[0] != '\0')
    {
        if (((str[0] >= 'A' && str[0] <= 'Z' ||
         (str[0] >= 'a' && str[0] <= 'z'))))
         return (0);
         str++;
    }
    return (1);
}

/*
int main(void)
{
    char str[] = "Ola bem vindo a 42";
	//char str[] = "";
   // printf("%d \n", str);
	printf("%d", ft_str_is_alpha(str));
	return (0); 
}*/