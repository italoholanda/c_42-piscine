/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:00:14 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/20 08:00:15 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_counter(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		++i;
		++str;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	cont;

	cont = str_counter(dest);
	while (*src != '\0')
	{
		dest[cont] = *src;
		++cont;
		++src;
	}
	dest[cont] = '\0';
	return (dest);
}
