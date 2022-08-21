/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:13:13 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/21 15:30:37 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '0')
	{
		if ((str[count] < 33) || (str[count] > 126))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

// int main(void)
// {
// 	char str[] = "sadfasd@@@@@fasdf";
// 	//char str[] = "";
// 	//printf("%d \n", str);
// 	printf("%d", ft_str_is_printable(str));
// }