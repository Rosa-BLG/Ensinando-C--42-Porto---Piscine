/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g <balage-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 03:26:13 by balage-g          #+#    #+#             */
/*   Updated: 2025/03/02 04:14:15 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int 	main (void)
{	
	int nbr;
	int *nbr1;
	int **nbr2;
	int ***nbr3;
	int ****nbr4;
	int *****nbr5;
	int ******nbr6;
	int *******nbr7;
	int ********nbr8;
	int *********nbr9;

	nbr1 = &nbr;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;
	ft_ultimate_ft(nbr9);
	printf("o valor apontado por nbr é %d\n", nbr);
	printf("o valor apontado por nbr1 é %d\n", *nbr1);
	printf("o valor apontado por nbr2 é %d\n", **nbr2);
	printf("o valor apontado por nbr3 é %d\n", ***nbr3);
	printf("o valor apontado por nbr4 é %d\n", ****nbr4);
	printf("o valor apontado por nbr5 é %d\n", *****nbr5);
	printf("o valor apontado por nbr6 é %d\n", ******nbr6);
	printf("o valor apontado por nbr7 é %d\n", *******nbr7);
	printf("o valor apontado por nbr8 é %d\n", ********nbr8);
	printf("o valor apontado por nbr9 é %d\n", *********nbr9);
	printf("o valor do endereco de nbr é: %p\n", (void *)&nbr);
	printf("o valor do endereco de nbr1 é: %p\n", (void *)nbr1);
	printf("o valor do endereco de nbr2 é: %p\n", (void *)nbr2);
	printf("o valor do endereco de nbr3 é: %p\n", (void *)nbr3);
	printf("o valor do endereco de nbr4 é: %p\n", (void *)nbr4);
	printf("o valor do endereco de nbr5 é: %p\n", (void *)nbr5);
	printf("o valor do endereco de nbr6 é: %p\n", (void *)nbr6);
	printf("o valor do endereco de nbr7 é: %p\n", (void *)nbr7);
	printf("o valor do endereco de nbr8 é: %p\n", (void *)nbr8);
	printf("o valor do endereco de nbr9 é: %p\n", (void *)nbr9);
}
