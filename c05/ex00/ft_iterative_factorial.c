/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:02:17 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/20 08:02:18 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	while (i > 1)
	{
		nb = nb * (i - 1);
		--i;
	}
	return (nb);
}
