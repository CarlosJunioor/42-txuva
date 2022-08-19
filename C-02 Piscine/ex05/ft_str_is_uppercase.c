/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:21:05 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/18 18:37:31 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 'A' || str[count] > 'Z')
		{
			return (0);
		}
		count++;
	}
	return (1);
}

// int main(void)
// {
// 	char str[] = "sdfg";
// //char str[] = "";
// //	printf("%d \n", str);
// 	printf("%d", ft_str_is_uppercase(str));
// 	return (0);
// }