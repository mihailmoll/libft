/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmihail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 16:57:14 by mmihail           #+#    #+#             */
/*   Updated: 2016/10/25 16:25:24 by mmihail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <string.h>
# include <stdarg.h>

typedef struct	s_format
{
	int	flag;
	int	width;
	int	preci;
	int type;
}				t_format;

int				ft_printf(const char *format, ...);
int				pf_putnbr(int n);
int				pf_putstr(char const *s);
t_format		pf_extract_format(char **s);
int				pf_int(va_list ap, t_format format);
int				pf_percent(va_list ap, t_format format);
int				pf_char(va_list ap, t_format format);
int				pf_str(va_list ap, t_format format);
int				pf_pointer(va_list ap, t_format format);
char			*ft_itoa(int n);
size_t			ft_strlen(const char *s);
char			*ft_strdup(const char *s1);
int				ft_isdigit(int c);
#endif
