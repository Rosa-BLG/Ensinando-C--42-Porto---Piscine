/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g < balage-g@student.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:37:48 by balage-g          #+#    #+#             */
/*   Updated: 2025/02/27 12:57:57 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	troca;

	troca = *b;
	*b = *a;
	*a = troca;
}

/*int main (void)
{
	int a;
	int b;
	
	a = 5;
	b = -72;
	printf("valor de a: %d\n", a);
 	printf("valor de b: %d\n", b);
	ft_swap(&a, &b);
	printf("valor de a trocado: %d\n", a);
	printf("valor de b trocado: %d\n", b);
}*/
