/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:33:44 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/10 20:44:54 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numb(char num)
{
	write(1, &num, 1);
}

void	ft_print_comb2(void)
{
	char	var1;
	char	var2;

	var1 = -1;
	while (++var1 <= 98)
	{
		var2 = var1;
		while (++var2 <= 99)
		{
			ft_print_numb((char)(var1 / 10) + '0');
			ft_print_numb((char)(var1 % 10) + '0');
			ft_print_numb(' ');
			ft_print_numb((char)(var2 / 10) + '0');
			ft_print_numb((char)(var2 % 10) + '0');
			if ((var1 != 98))
			{
				ft_print_numb(',');
				ft_print_numb(' ');
			}
		}
	}
}
