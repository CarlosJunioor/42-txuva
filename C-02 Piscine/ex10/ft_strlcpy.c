/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:03:26 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/21 15:31:11 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count_a;
	unsigned int	count_b;

	count_a = 0;
	count_b = 0;
	while (src[count_a] != '\0')
	{
		count_a++;
		if (size < 1)
		{
			return (count_a);
		}
		while (count_b < (size - 1) && src[count_b] != '\0')
		{
			dest[count_b] = src[count_b];
			count_b++;
		}
	}
	dest[count_b] = '\0';
	return (count_a);
}

/*
int main(void)
{
	char src[] = "palavra";
   	char dest[5];

    printf("source: %s\n", src);
    
    ft_strlcpy(dest, src, 5);

    printf("destiny: %s\n", dest);
}*/