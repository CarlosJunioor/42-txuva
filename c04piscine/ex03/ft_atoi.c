/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 22:53:36 by marvin            #+#    #+#             */
/*   Updated: 2022/08/23 16:11:14 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	numb;
	int	res;

	numb = 1;
	i = 0;
	res = 0;
	while (str[i] <= ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			numb = numb * -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10;
		res = res + str[i] - 48;
		i++;
	}
		res = res * numb;
	return (res);
}
