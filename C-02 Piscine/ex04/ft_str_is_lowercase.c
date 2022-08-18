/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:35:02 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/18 14:01:41 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] <= 'a' || str[count] >= 'z')
		{
			return (0);
		}
		count++;
	}
	return (1);
}

// int main(void)
// {
// 	char str[] = "sdfSgfdgdfgSSFGDFGHDFg";
// char str[] = "";
// 	printf("%d \n", str);
// 	printf("%d", ft_str_is_lowercase(str));
// 	return (0);
// }