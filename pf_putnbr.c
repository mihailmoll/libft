/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 16:58:04 by mmihail           #+#    #+#             */
/*   Updated: 2016/10/18 16:58:07 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdlib.h>

int	pf_putnbr(int n)
{
	char	*s;
	int		len;

	s = ft_itoa(n);
	len = pf_putstr(s);
	free(s);
	return (len);
}
