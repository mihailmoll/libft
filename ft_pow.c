/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 16:28:34 by mmihail           #+#    #+#             */
/*   Updated: 2016/10/18 17:01:38 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_pow(int x, unsigned int y)
{
	int temp;

	if (y == 0)
		return (1);
	temp = ft_pow(x, y / 2);
	if (y % 2 == 0)
		return (temp * temp);
	else
		return (x * temp * temp);
}