/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strvadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 16:55:05 by mmihail           #+#    #+#             */
/*   Updated: 2016/10/18 16:55:07 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_strvadd(char ***strv, char *s)
{
	char	**newstrv;
	int		len;

	len = 0;
	if (*strv == NULL)
		len = 0;
	else
		len = ft_strvlen(*strv);
	if ((newstrv = (char**)malloc(sizeof(char*) * (len + 2))) == NULL)
		return (-1);
	newstrv[len + 1] = NULL;
	newstrv[len] = s;
	while (len--)
		newstrv[len] = (*strv)[len];
	free(*strv);
	*strv = newstrv;
	return (0);
}
