/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g <balage-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:04:00 by balage-g          #+#    #+#             */
/*   Updated: 2025/03/04 19:30:41 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int main (void)
{
	printf("%d", ft_strncmp("abcdefg","abcdefg", 7));
	printf("%d", ft_strncmp("abcdefg","abcdffg", 4));
	printf("%d", ft_strncmp("abcdefg","abcdffg", 7));
}*/
