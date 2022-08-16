/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:04:34 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/10 20:15:20 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print(int first, int second, int third)
{
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, &third, 1);
	if (first != '7' || second != '8' || third != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	while (first <= '7')
	{
	second = first +1;
		while (second <= '8')
		{
			third = second +1;
			while (third <= '9')
			{
				ft_print(first, second, third);
		third++;
			}
	second++;
		}
	first++;
	}
}
