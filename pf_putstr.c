/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 16:58:12 by mmihail           #+#    #+#             */
/*   Updated: 2016/10/18 16:58:15 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <unistd.h>

int	pf_putstr(char const *s)
{
	int	len;

	len = ft_strlen(s);
	write(1, s, len);
	return (len);
}
