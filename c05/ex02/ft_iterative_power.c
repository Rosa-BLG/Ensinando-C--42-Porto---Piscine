/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g <balage-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:25:03 by balage-g          #+#    #+#             */
/*   Updated: 2025/03/10 18:56:32 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	m;

	i = 1;
	m = nb;
	if (power > 0)
	{
		while (i < power)
		{
			nb = nb * m;
			i++;
		}
		return (nb);
	}
	if (power == 0)
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>

int main(void)
{
	printf("%d", ft_iterative_power(2,0));
}*/
