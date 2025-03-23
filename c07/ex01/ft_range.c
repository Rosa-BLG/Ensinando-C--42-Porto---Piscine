/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g <balage-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:19:23 by balage-g          #+#    #+#             */
/*   Updated: 2025/03/11 17:20:15 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count(int min, int max);

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	ptr = (int *)malloc(ft_count(min, max) * sizeof(int));
	if (ptr == 0)
		return (0);
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}

int	ft_count(int min, int max)
{
	return (max - min);
}

/*#include <stdio.h>

int	main ()
{
	int	i;
	int	*ptr;

	i = 0;
	ptr = ft_range(-27, 56); 
	while (i < ft_count(-27, 56))
	{		
		printf("%d\n", ptr[i]);
		i++;
	}
	free(ptr);
}*/
