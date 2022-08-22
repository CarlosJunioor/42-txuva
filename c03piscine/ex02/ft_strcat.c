/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:30:03 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/21 19:07:30 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	count_a;
	unsigned int	count_b;

	count_a = 0;
	count_b = 0;
	while (dest[count_a] != '\0')
	{
		count_a++;
	}
	while (src[count_b] != '\0')
	{
		dest[count_a] = src[count_b];
		count_a++;
		count_b++;
	}
	dest[count_a] = '\0';
	return (dest);
}
