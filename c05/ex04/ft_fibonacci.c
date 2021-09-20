/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:02:50 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/20 08:02:52 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int queue;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		queue = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (queue);
	}
	else
		return (-1);
}
