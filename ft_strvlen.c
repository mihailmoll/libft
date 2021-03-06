/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strvlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 16:55:25 by mmihail           #+#    #+#             */
/*   Updated: 2016/10/18 16:55:28 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strvlen(char **strv)
{
	int		i;

	i = 0;
	while (strv && strv[i])
		i++;
	return (i);
}
