/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:13:36 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/18 14:01:02 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (((str[count] <= 'Z') && (str[count] >= 'A'))
			|| ((str[count] <= 'z') && (str[count] >= 'a'))
			|| ((str[count] <= '9') && (str[count] >= '0')))
		{
			if ((str[count] <= 122) && (str[count] >= 97))
				str[count] = str[count] - 32;
			count++;
			while (((str[count] <= 'Z') && (str[count] >= 'A'))
				|| ((str[count] <= 'z') && (str[count] >= 'a'))
				|| ((str[count] <= '9') && (str[count] >= '0')))
			{
				if ((str[count] <= 90) && (str[count] >= 65))
				str[count] = str[count] + 32;
				count++;
			}
		}
		else
		count++;
	}
	return (str);
}

// int main(void)
// {
// 	char str[] = "salut, comment tu vas ? 42mots quarante-deux;";
// char str[] = "";
// 	printf("%d \n", str);
// 	printf("%s", ft_strcapitalize(str));
// 	return (0);
// }