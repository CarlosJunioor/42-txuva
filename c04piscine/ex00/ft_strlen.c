/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:22:20 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/22 19:26:50 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int	ft_strlen(char *str)
{
    int count;

    count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
	return (count);
}

int main()
{
	char string[] = "hello";

    printf("%d ", ft_strlen(string));
    
}