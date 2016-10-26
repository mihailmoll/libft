/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 17:00:56 by mmihail           #+#    #+#             */
/*   Updated: 2016/10/18 17:01:05 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <errno.h>

void	*ft_memdup(const void *s, size_t n)
{
	void	*new;

	if ((new = malloc(sizeof(unsigned char) * n)) == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_memcpy(new, s, n);
	return (new);
}
