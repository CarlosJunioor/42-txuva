/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:18:19 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/16 18:27:57 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int count;
    
    count = 0;
    while (src[count] != '\0' && count < n)
    {
        dest[count] = src[count];
        count++;
    }
    while (count < n)
    {
        dest[count] = '\0';
        count++;
    }
    return(dest);
    
}

int main()
{
    char dest[] = "";
    char *src = "abc";

    ft_strncpy(dest,src,6);
    printf("%s", dest);
    return 0;
}
