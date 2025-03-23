/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g <balage-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 06:39:07 by balage-g          #+#    #+#             */
/*   Updated: 2025/03/11 01:35:22 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}

/*#include <stdio.h>

int	main(void)
{
	int i = -2;

	while (i<7)
	{
		printf("%d\n",ft_recursive_factorial(i));
		i++;
	}
}*/
