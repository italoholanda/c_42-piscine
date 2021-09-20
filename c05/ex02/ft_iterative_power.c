/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:02:36 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/20 08:02:38 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int temp;

	if (power == 0)
		return (1);
	else if (power < 0)
	{
		return (0);
	}
	else if (power == 1)
		return (nb);
	else
		i = power;
		temp = nb;
		while (i > 1)
		{
			temp = nb * temp;
			--i;
		}
	return (temp);
}
