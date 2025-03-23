/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g <balage-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:16:42 by balage-g          #+#    #+#             */
/*   Updated: 2025/03/03 23:38:54 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

/*int main (void)
{
	printf("%d", ft_str_is_uppercase("Hello"));
	printf("%d", ft_str_is_uppercase("HABIAYR"));
	printf("%d", ft_str_is_uppercase("1H2e3llo"));
	printf("%d", ft_str_is_uppercase("HADF3"));
	printf("%d", ft_str_is_uppercase(""));

}*/
