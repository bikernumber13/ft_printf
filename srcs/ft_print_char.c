/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 17:43:27 by mbouhier          #+#    #+#             */
/*   Updated: 2016/01/09 17:43:29 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_print_char(const char *format, va_list ap, int count)
{
	char 	*str;
	wchar_t *str2;

	if (*format == 's')
	{
		str = va_arg(ap, char *);
		while (str)
		{
			write(1, &str2, 1);
			str2++;
			count++;
		}
	}
	else
	{
		str2 = va_arg(ap, wchar_t *);
		while (str2)
		{
			write(1, &str2, 1);
			str2++;
			count++;
		}
	} 
	return (count);
}