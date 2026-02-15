/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamerio <glamerio@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 15:18:08 by glamerio          #+#    #+#             */
/*   Updated: 2026/02/15 19:21:05 by glamerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_array(int n, int *arr)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = arr[i] + '0';
		write(1, &c, 1);
		i++;
	}
	if (arr[0] != 10 - n)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_combn_recursive(int n, int index, int start_digit, int *arr)
{
	int	i;

	if (index == n)
	{
		ft_print_array(n, arr);
	}
	else
	{
		i = start_digit;
		while (i <= 9)
		{
			arr[index] = i;
			ft_print_combn_recursive(n, index + 1, i + 1, arr);
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	ft_print_combn_recursive(n, 0, 0, arr);
}
