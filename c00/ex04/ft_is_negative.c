/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 07:57:11 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/20 07:57:13 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	const char	positive = 'P';
	const char	negatitive = 'N';

	if (n < 0)
	{
		write(1, &negatitive, 1);
	}
	else
	{
		write(1, &positive, 1);
	}
}
