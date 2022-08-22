/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:12:32 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/22 17:50:22 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count_a;
	int	count_b;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	count_a = 0;
	while (str[count_a] != '\0')
	{
	count_b = 0;
		while (str[count_a + count_a] != '\0'
			&& str[count_a + count_b] == to_find[count_b])
		{
			if (to_find[count_b + 1] == '\0')
			{
				return (&str[count_a]);
			}
		count_b++;
		}
	count_a++;
	}
	return (0);
}
