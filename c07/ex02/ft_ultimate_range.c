/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g <balage-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 04:32:02 by balage-g          #+#    #+#             */
/*   Updated: 2025/03/13 13:17:34 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptr = (int *)malloc((max - min) * sizeof(int));
	if (ptr == 0)
		return (-1);
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	*range = ptr;
	return (i);
}

/*int main()
{
	int	min = -9;
	int	max = 27;
	int	i = 0;
	int	*range;

	printf("%d\n", ft_ultimate_range(&range, min, max));
	while(i < ft_ultimate_range(&range, min, max))
	{
		printf("%d\n", range[i]);
		i++;
	}
}*/
