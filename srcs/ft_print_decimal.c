/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 19:07:39 by mbouhier          #+#    #+#             */
/*   Updated: 2016/01/09 19:07:41 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_print_char(const char *format, va_list ap, int count)
{
	int 		numb;
	long int	numb2;

	if (*format == 'd' || *format == 'i')
	{
		numb = va_arg(ap, int);
		count = ft_putnbr((long int)numb, 0);
	}
	else
	{
		numb2 = va_arg(ap, int);
		count = ft_putnbr(numb2, 0);
	} 
	return (count);
}