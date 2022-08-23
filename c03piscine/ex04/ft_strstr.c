/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:12:32 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/23 14:57:39 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (to_find[k] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i + k] == to_find[k] && str[i + k] != '\0')
		{
			k++;
			if (to_find[k] == '\0')
			{
				return (str + i);
			}
		}
		i++;
	}
	return (0);
}
