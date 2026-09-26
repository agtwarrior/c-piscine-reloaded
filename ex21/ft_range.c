/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davguerr <davguerr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 15:25:58 by davguerr          #+#    #+#             */
/*   Updated: 2026/08/27 19:14:53 by davguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	str = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}

// void print_int_array(int *arr, int size)
// {
// 	int i;

// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	printf("\n");
// }

// int main(void)
// {
// 	print_int_array(ft_range(-5, 5), 10);
// 	return (0);
// }
