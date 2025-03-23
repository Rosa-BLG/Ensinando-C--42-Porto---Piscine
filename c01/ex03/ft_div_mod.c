/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g <balage-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 04:00:34 by balage-g          #+#    #+#             */
/*   Updated: 2025/02/27 04:10:24 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main (void)
{
	int div;
	int mod;
	ft_div_mod(7, 2, &div, &mod);
	printf("valor da divisao: %d\n", div);
	printf("resto da divisao: %d\n", mod);
}*/
