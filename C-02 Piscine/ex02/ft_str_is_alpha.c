/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:40:36 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/21 13:22:12 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 'A' || str[count] < 'Z'
			&& str[count] < 'a' || str[count] < 'z')
			return (0);
		count++;
	}
	return (1);
}

// int main(void)
// {
//     char str[] = "";
// 	//char str[] = "";
//    // printf("%d \n", str);
// 	printf("%d", ft_str_is_alpha(str));
// 	return (0); 
// }