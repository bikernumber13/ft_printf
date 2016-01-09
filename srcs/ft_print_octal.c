/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_octal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 19:34:55 by mbouhier          #+#    #+#             */
/*   Updated: 2016/01/09 19:34:58 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_print_octal(const char *format, va_list ap, int count)
{
	unsigned int 		numb;
	long unsigned int	numb2;

	if (*format == 'd' || *format == 'i')
	{
		numb = va_arg(ap, int);
		count = ft_putnbr_octal((long unsigned int)numb, 0);
	}
	else
	{
		numb2 = va_arg(ap, int);
		count = ft_putnbr_octal(numb2, 0);
	} 
	return (count);
}