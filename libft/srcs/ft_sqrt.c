/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 00:55:00 by kelhaddo          #+#    #+#             */
/*   Updated: 2019/04/24 00:55:02 by kelhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i < nb / 2 && i < 46340)
	{
		if ((i * i) == nb)
			return (i);
		else
			i++;
	}
	return (0);
}