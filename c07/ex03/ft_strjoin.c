/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balage-g <balage-g@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:22:47 by balage-g          #+#    #+#             */
/*   Updated: 2025/03/13 14:27:39 by balage-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
char	*ft_strcat(int size, char **strs, char *sep, char *new_str);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		s;
	char	*new_str;

	i = 0;
	s = 0;
	if (size <= 0)
		s = 1;
	else
	{
		while (i < size)
		{
			s = s + ft_strlen(strs[i]);
			i++;
		}
		s = s + ft_strlen(sep) * size - 1;
	}
	new_str = (char *) malloc((s + 1) * sizeof(char));
	if (new_str == NULL)
		return (0);
	return (ft_strcat(size, strs, sep, new_str));
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(int size, char **strs, char *sep, char *new_str)
{
	int	i;
	int	j;
	int	st;

	i = 0;
	st = 0;
	new_str[0] = '\0';
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			new_str[st] = strs[i][j];
			st++;
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
			new_str[st++] = sep[j++];
		i++;
	}
	new_str[st] = '\0';
	return (new_str);
}

/*int main (int ac, char **av)
{
	int size = 0; 
	char	*sep = "-";

	(void)ac;
	while (av[size])
		size++;
	printf("%s\n", ft_strjoin(size, av, sep));
}*/
