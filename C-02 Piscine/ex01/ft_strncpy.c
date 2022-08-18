/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:18:19 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/18 13:48:44 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

/*
int main(void)
{
	char string_dest[] = "";
	char string_src[] = "abc";
	int lenght = sizeof(string_src)/sizeof(string_src[0]);

	ft_strncpy(string_dest, string_src, lenght);
	
	printf("%s :", string_dest);
	
}
*/
