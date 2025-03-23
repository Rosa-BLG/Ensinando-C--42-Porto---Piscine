/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g <balage-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:10:47 by balage-g          #+#    #+#             */
/*   Updated: 2025/03/07 12:22:47 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdlib.h>*/

void	ft_putnbr(int nb)
{
	char	nc;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
		nc = nb + 48;
		write (1, &nc, 1);
	}
	else
	{
		nc = nb + 48;
		write (1, &nc, 1);
	}
}

/*int main (int argc, char **argv)
{
	if(argc != 2)
		return (1);
	ft_putnbr(atoi(argv[1]));
}*/
