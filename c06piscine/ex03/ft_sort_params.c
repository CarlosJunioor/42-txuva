/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carloda- <carloda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 21:01:21 by carloda-          #+#    #+#             */
/*   Updated: 2022/08/25 21:25:44 by carloda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_print_params(int argc, char **argv)
{
	int	i;
	int	x;

	x = 0;
	i = 1;
	if (argc > 1)
	{
		while (argv[i][x] != '\0')
		{
			write(1, &argv[i][x], 1);
			x++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int	i;
	char	*swap;

	(void) argc;
	(void) argv;
	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			swap = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = swap;
			i = 1;
		}
		else
			i++;
	}
	ft_print_params(argc, argv);
	return (0);
}
