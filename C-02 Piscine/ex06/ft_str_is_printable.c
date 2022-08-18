/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:13:13 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/18 13:57:22 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 32 && str[count] <= 126)
		count++;
		else
			return (0);
	}
	if (str[count] == '\0')
	{
		return (0);
	}
	return (1);
}

// int main(void)
// {
// 	char str[] = "sadfasdfasdf";
// 	//char str[] = "";
// 	//printf("%d \n", str);
// 	printf("%d", ft_str_is_printable(str));
// 	return (0);
// }