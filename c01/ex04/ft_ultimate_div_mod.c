/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 07:58:25 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/20 07:58:27 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div_ab;
	int	mod_ab;

	div_ab = *a / *b;
	mod_ab = *a % *b;
	*a = div_ab;
	*b = mod_ab;
}
