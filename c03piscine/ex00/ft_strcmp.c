/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:24:25 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/18 20:20:24 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    int	i;

	i = 0;
	while (s1[i] == s2[i] != '\0')
	{
        i++;        
	}
	return ((unsigned)s1[i] - (unsigned)s2[i]);
}

int main()
{
    char string1[] = "abcde";
    char string2[] = "abcdefg";

    ft_strcmp(string1, string2);
    //printf("%s %s", string2, string1);
    printf("%d",strcmp("2","1"));
	printf("%d",ft_strcmp("2","1"));


    return (0);
}