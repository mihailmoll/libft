/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 14:53:58 by mmihail           #+#    #+#             */
/*   Updated: 2016/10/28 14:54:02 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	if (s == NULL)
		return (0);
	i = start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (NULL);
	while (i < start + len)
	{
		str[i - start] = s[i];
		i++;
	}
	str[i - start] = '\0';
	return (str);
}
