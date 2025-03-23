/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g <balage-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:08:43 by balage-g          #+#    #+#             */
/*   Updated: 2025/03/08 18:10:53 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char **av);
void	ft_bublle(int ac, char **av);

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_bublle(ac, av);
		ft_print(av);
	}
}

void	ft_print(char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}

void	ft_bublle(int ac, char **av)
{
	int		i;
	int		j;
	int		k;
	char	*swap;

	i = 0;
	while (i < ac - 1)
	{
		j = 0;
		while (j < ac -1 - i)
		{
			k = 0;
			while (av[j][k] && av[j + 1][k] && av[j][k] == av[j + 1][k])
				k++;
			if (av[j][k] >= av[j + 1][k])
			{
				swap = av[j];
				av[j] = av[j + 1];
				av[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
}
