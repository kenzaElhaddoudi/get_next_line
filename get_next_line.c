/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_tab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 01:44:00 by kelhaddo          #+#    #+#             */
/*   Updated: 2019/05/06 02:47:32 by kelhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
static    unsigned    int        ft_linelen(char *tab)
{
    unsigned int            i;

    i = 0;
    while (tab[i] != '\n' && tab[i] != '\0')
        i++;
    return (i);
}

static char                    *ft_line(char *tab)
{
    if (ft_strchr(tab, '\n'))
    {
        ft_strcpy(tab, ft_strchr(tab, '\n') + 1);
        return (tab);
    }
    if (ft_linelen(tab) > 0)
    {
        ft_strcpy(tab, ft_strchr(tab, '\0'));
        return (tab);
    }
    return (NULL);
}

int                            get_next_line(int const fd, char **line)
{
    char                    *tmp;
    char                    *tmp2;
    char                    buff[BUFF_SIZE + 1];
    static    char            *tab[4096];
    int                        ret;

    if (fd < 0 || BUFF_SIZE < 1 || !line || read(fd, buff, 0) < 0)
        return (-1);
    if (!(tab[fd]) && (tab[fd] = ft_strnew(0)) == NULL)
        return (-1);
    while (!(ft_strchr(tab[fd], '\n')) && (ret = read(fd, buff, BUFF_SIZE)) > 0)
    {
        buff[ret] = '\0';
        tmp = tab[fd];
        tab[fd] = ft_strjoin(tab[fd], buff);
	free(tmp);
    }
	tmp2 = *line;
	*line = ft_strsub(tab[fd], 0, ft_linelen(tab[fd]));
	free(tmp2);
    if (ft_line(tab[fd]) == NULL)
	{free(tab[fd]);
        return (0);}
    return (1);
}
