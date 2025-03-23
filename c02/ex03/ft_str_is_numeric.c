/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g <balage-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:31:13 by balage-g          #+#    #+#             */
/*   Updated: 2025/03/03 20:44:21 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
		}
		else
		{
			return (0);
		}
		str++;
	}
	if (str[0] == '\0')
		return (1);
	return (1);
}

/*int main (void)
{
	char str1[20] = "1745783563";
	char str2[20] = "23gyu34";
	char str[20] = "\0";

	printf("%d",ft_str_is_numeric(str1));
	printf("%d",ft_str_is_numeric(str2));
	printf("%d",ft_str_is_numeric(str));
}*/
