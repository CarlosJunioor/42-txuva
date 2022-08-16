/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 20:24:44 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/12 14:52:42 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_insertchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_insertchar('-');
		ft_insertchar('2');
		ft_putnbr(147483648);
	}
	if (nb < 0 )
	{
		ft_insertchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	} 
	if (nb < 10 && nb != -2147483648)
	{
		ft_insertchar(nb + '0');
		return ;
	}
}
