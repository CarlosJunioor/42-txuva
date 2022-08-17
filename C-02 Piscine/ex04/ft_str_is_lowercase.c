/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:35:02 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/17 18:15:49 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_lowercase(char *str)
{
    while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		++str;
	}
	return (1);

}

int main(void)
{
	char str[] = "sdfg";
//char str[] = "";
//	printf("%d \n", str);
	printf("%d", ft_str_is_lowercase(str));
	return (0);
}