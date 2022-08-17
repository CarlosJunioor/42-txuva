/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:51:21 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/17 18:20:02 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_numeric(char *str)
{
   while(*str)
   {
       if(*str <= '0' || *str >= '9')
       return (0);
       str++;
   }
    return (1);
    
}

int main(void)
{
	char str[] = "0";
    //char str[] = "";
//	printf("%d \n", str);
	printf("%d", ft_str_is_numeric(str));
	return (0);
}