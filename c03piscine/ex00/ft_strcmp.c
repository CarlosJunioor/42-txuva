/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:24:25 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/20 13:47:08 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int count;

	count = 0;
	while (s1[count] == s2[count] && (s1[count] != '\0' || s2[count] != '\0'))
	{
		count++;
	}
	return (s1[count] - s2[count]);
}

int main(void)
{
	printf("%d", ft_strcmp("Hello", "Hello1"));
	printf("\n%d", ft_strcmp("Hello", "He"));
	printf("\n%d", ft_strcmp("He", "Hello"));
	printf("\n%d", ft_strcmp("Hello", "Hello"));
}