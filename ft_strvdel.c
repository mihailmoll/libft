/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strvdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 16:55:13 by mmihail           #+#    #+#             */
/*   Updated: 2016/10/18 16:55:16 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strvdel(char ***strv)
{
	int		i;

	if (*strv != NULL)
	{
		i = -1;
		while ((*strv)[++i])
			free((*strv)[i]);
		free((*strv));
		*strv = NULL;
	}
}
