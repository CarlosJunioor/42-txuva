/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:40:50 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/21 19:06:40 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count_a;
	unsigned int	count_b;

	count_a = 0;
	count_b = 0;
	while (dest[count_a] != '\0' && count_a < nb)
	{
		count_a++;
	}
	while (src[count_b] != '\0' && count_b < nb)
	{
		dest[count_a] = src[count_b];
		count_a++;
		count_b++;
	}
	dest[count_a] = '\0';
	return (dest);
}
