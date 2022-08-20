/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:00:31 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/20 19:28:42 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int count;

    count = 0;
    while (s1[count] == s2[count] && s1[count] != '\0' && s2[count] != '\0' && count < n)
    {
        count++;
    }
    return (s1[count] - s2[count]);
}

int main()
{
    printf("%d", ft_strncmp("Helloworld", "Helloworld1", 11));
	printf("\n%d", ft_strncmp("ola3teste", "ola2teste", 10));
	printf("\n%d", ft_strncmp("He", "Hello", 5));
	printf("\n%d", ft_strncmp("Hello", "Hello", 5));
}