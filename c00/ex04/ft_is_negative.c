/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g <balage-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 23:53:39 by balage-g          #+#    #+#             */
/*   Updated: 2025/02/24 00:45:28 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{       
        if (n < 0)
                write(1, "N", 1);
        else
                write(1, "P", 1);
}       

/*int main (void)
{       
        ft_is_negative(5);
	ft_is_negative(-100);
	ft_is_negative(0);

        return(0);
}*/   
