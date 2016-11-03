/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getlines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 14:39:33 by mmihail           #+#    #+#             */
/*   Updated: 2016/10/28 15:02:00 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	strdel(void *str, size_t size)
{
	ft_memdel(&str);
	(void)size;
}

int				ft_getlines(int fd, t_list **lst)
{
	t_list	*ptr;
	char	*line;
	int		ret;

	while ((ret = get_next_line(fd, &line)))
	{
		ptr = ft_lstnew(line, ft_strlen(line) + 1);
		ft_strdel(&line);
		if (ptr == NULL)
		{
			ret = -1;
			break ;
		}
		ft_lstadd(lst, ptr);
	}
	if (ret == -1)
	{
		ft_lstdel(lst, strdel);
		return (0);
	}
	ft_lstrev(lst);
	return (1);
}
