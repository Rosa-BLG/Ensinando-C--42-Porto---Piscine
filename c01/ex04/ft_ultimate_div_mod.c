/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g <balage-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 04:19:29 by balage-g          #+#    #+#             */
/*   Updated: 2025/03/01 19:01:11 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *a / *b;
	*b = swap % *b;
}

/*int main (void)
{
	int a;
	int b;

	a = 25;
	b = ;
	ft_ultimate_div_mod(&a, &b);
	printf("valor da divisao: %d\n", a);
	printf("resto da divisao: %d\n", b);

}*/
