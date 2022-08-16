/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 20:50:34 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/16 16:17:34 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

int main(void)
{
	char dest[] = "";
	char sour[] = "madebybrazil";

	printf("%s\n", dest);
	printf("%s\n", sour);

	ft_strcpy(dest, sour);	

	printf("after copying: %s\n", dest);
	
}