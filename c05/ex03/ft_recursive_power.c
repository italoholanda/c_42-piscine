/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:02:43 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/20 08:02:45 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 1 || nb == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}
