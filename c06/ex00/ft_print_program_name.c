/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g <balage-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:36:48 by balage-g          #+#    #+#             */
/*   Updated: 2025/03/08 14:55:50 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *name[0])
{
	int	i;

	i = 0;
	while (name[0][i] != '\0')
	{
		write (1, &name[0][i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int ac, char **av)
{
	(void)ac;
	ft_print_program_name(&av[0]);
}
