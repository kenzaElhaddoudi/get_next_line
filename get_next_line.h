/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 18:54:14 by kelhaddo          #+#    #+#             */
/*   Updated: 2019/05/25 18:54:17 by kelhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "./libft/includes/libft.h"

#define	BUFF_SIZE 5

int		get_next_line(int const fd, char **line);

#endif
