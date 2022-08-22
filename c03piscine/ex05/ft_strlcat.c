/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:12:36 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/22 17:02:06 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int count_a;

    count_a = 0;
    while (src[count_a] != '\0')
    {
        dest[count_a] = src[count_a];
        count_a++;
    }
    return (dest[count_a]);
}
