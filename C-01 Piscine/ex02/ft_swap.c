/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:58:13 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/16 15:46:54 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	change;

	change = *a;
	*a = *b;
	*b = change;
}

/*
int	main(){

	int valueA;
	int valueB;
	ft_swap(&valueA,&valueB);

	printf("%d %d", valueA, valueB);
	
}
*/