/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g <balage-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:38:21 by balage-g          #+#    #+#             */
/*   Updated: 2025/03/03 20:29:12 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
		}
		else
			return (0);
		str++;
	}
	return (1);
}

/*int main(void)
{
    char str[20] = "Barba$ra";

    printf(" %d", ft_str_is_alpha(str));

    return 0;
}*/
