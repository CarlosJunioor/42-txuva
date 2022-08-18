/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:13:29 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/18 13:58:42 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 65 && str[count] <= 90)
		{
			str[count] = str[count] + 32;
		}
		count++;
	}
	return (str);
}

// int main(void)
// {
// 	char str[] = "AAAAAA";
// //char str[] = "";
// //	printf("%d \n", str);
// 	printf("%s", ft_strlowcase(str));
// 	return (0);
// }