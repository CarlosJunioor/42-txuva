/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:03:26 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/18 18:38:30 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int count;
	unsigned int res;

	count = 0;
	res = 0;
	while (src[count] && count < size - 1)
	{
		if (size < 1)
		return (res);
		else
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (res);
}

int main(void)
{
	char src[] = "hithisisateste";
	char dest[10];

	ft_strlcpy(dest, src, 5);
	printf("%s", dest);
	return (0);
}