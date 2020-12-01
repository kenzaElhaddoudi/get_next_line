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

#include <fcntl.h>
#include "get_next_line.h"

#define	BUFF_SIZE 5

int main()
{
	int			fd1,fd2;
	char		*line;
line =malloc(0);
		fd1 = open("tests/test1.txt", O_RDONLY);
		fd2 = open("tests/test2.txt", O_RDONLY);

while(get_next_line(fd1, &line))
			{ft_putstr(line);
			ft_putchar('\n');}
if (line) free(line);
		close(fd1);
		close(fd2);

return 0;
}
