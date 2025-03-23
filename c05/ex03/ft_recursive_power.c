/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g <balage-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:04:52 by balage-g          #+#    #+#             */
/*   Updated: 2025/03/10 19:05:55 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	res = res * ft_recursive_power(nb, power - 1);
	return (res * nb);
}

/*#include <stdio.h>

int main(void)
{
	printf("%d", ft_recursive_power(-4, -3));
}*/
