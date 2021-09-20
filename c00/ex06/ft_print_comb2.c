/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 07:57:33 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/20 07:57:34 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printcomb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_putchar(48 + (num1 / 10));
			ft_putchar(48 + (num1 % 10));
			ft_putchar(' ');
			ft_putchar(48 + (num2 / 10));
			ft_putchar(48 + (num2 % 10));
			if (num1 != 98 || num2 != 99)
				write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}
