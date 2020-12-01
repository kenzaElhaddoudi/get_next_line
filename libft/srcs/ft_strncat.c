/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 05:44:40 by kelhaddo          #+#    #+#             */
/*   Updated: 2019/04/18 05:44:41 by kelhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*dest;
	char	*src;
	size_t	i;

	i = 0;
	dest = s1;
	src = (char*)s2;
	while (*dest)
		dest++;
	while (*src && (i < n))
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (s1);
}
