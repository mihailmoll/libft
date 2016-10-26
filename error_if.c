/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_if.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 16:35:54 by mmihail           #+#    #+#             */
/*   Updated: 2016/10/18 16:35:55 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	error_if(int boolean, char *error_message)
{
	if (boolean)
	{
		error_exit(error_message);
	}
}
