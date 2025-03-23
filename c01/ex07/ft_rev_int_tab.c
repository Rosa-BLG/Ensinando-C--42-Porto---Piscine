/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g <balage-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:38:34 by balage-g          #+#    #+#             */
/*   Updated: 2025/02/27 19:11:43 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	change;	
	int	aux;

	c = 0;
	while (c <= (size / 2))
	{
		aux = size - c - 1;
		change = tab[c];
		tab[c] = tab[aux];
		tab[aux] = change;
		c++;
	}
}

/*int main (void)
{
	int tab[5] = {1, 2, 3, 4, 5};
	
	ft_rev_int_tab(&tab[0], 5);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
}
*/
