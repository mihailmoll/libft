/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   svdebug.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 16:58:21 by mmihail           #+#    #+#             */
/*   Updated: 2016/10/18 16:58:28 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SVDEBUG_H
# define SVDEBUG_H
# include <libftprintf.h>

# define PRI(var) ft_printf( #var " : %d ; ", var)
# define PRINL(var) ft_printf( #var " : %d ; \n", var)
# define PRS(var) ft_printf( #var " : \"%s\" ; ", var)
# define PRSNL(var) ft_printf( #var " : \"%s\" ; \n", var)

#endif
