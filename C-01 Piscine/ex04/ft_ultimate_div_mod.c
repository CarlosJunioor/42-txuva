/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:04:09 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/15 20:36:44 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	remainder;

	division = *a / *b;
	remainder = *a % *b;
	*a = division;
	*b = remainder;
}

/*
int main(void)
{
	int numA;
	int numB;

	numA = 50;
	numB = 2;

	ft_ultimate_div_mod(&numA, &numB);

	printf("These are the values of A and B = %d %d \n", numA, numB);
	
}
*/
