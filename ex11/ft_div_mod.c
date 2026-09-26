/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davguerr <davguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 12:27:25 by davguerr          #+#    #+#             */
/*   Updated: 2026/08/17 12:31:45 by davguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*div;
// 	int	*mod;

// 	a = 11;
// 	b = 10;
// 	div = &a;
// 	mod = &b;
// 	ft_div_mod(a, b, div, mod);
// 	printf("%d %d\n", a, b);
// 	return (0);
// }
