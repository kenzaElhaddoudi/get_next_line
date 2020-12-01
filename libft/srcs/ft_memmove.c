/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 05:41:42 by kelhaddo          #+#    #+#             */
/*   Updated: 2019/04/24 00:29:45 by kelhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;

	tmp = malloc(sizeof(char) * (len + 1));
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	return ((void*)dst);
}
