/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:52:30 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/15 20:35:53 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main(void)
{
	int numA;
	int numB;

	numA = 50;
	numB = 2;
	int divRes;
	int modRes;

	ft_div_mod(numA, numB, &divRes, &modRes);

	printf("These are the values of A and B = %d %d \n", numA, numB);

	printf("These are the values of DIVRES and MODRES %d %d \n", divRes, modRes);
	
}
*/