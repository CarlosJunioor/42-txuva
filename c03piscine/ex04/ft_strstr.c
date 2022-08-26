/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:12:32 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/24 15:59:45 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count_a;
	int	count_b;

	count_a = 0;
	count_b = 0;
	if (to_find[count_b] == '\0')
	{
		return (str);
	}
	while (str[count_a] != '\0')
	{
		count_b = 0;
		while (str[count_a + count_b] == to_find[count_b]
			&& str[count_a + count_b] != '\0')
		{
			count_b++;
			if (to_find[count_b] == '\0')
			{
				return (str + count_a);
			}
		}
		count_a++;
	}
	return (0);
}
