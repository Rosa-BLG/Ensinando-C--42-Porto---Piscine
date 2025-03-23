/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g <balage-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 06:12:44 by balage-g          #+#    #+#             */
/*   Updated: 2025/03/11 01:28:49 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fat;

	if (nb < 0)
		return (0);
	fat = 1;
	while (1 <= nb)
	{
		fat = fat * nb;
		nb--;
	}
	return (fat);
}

/*#include <stdio.h>

int main ()
{
	int i = -2;
	while (i < 7)
	{
		printf("%d\n",ft_iterative_factorial(i));
		i++;
	}
}*/
