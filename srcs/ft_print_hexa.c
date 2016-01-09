/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 20:30:09 by mbouhier          #+#    #+#             */
/*   Updated: 2016/01/09 20:30:11 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_print_hexa(const char *format, va_list ap, int count)
{
	int 		numb;
	long int	numb2;

	if (*format == 'd' || *format == 'i')
	{
		numb = va_arg(ap, int);
		count = ft_putnbr_undec((long int)numb, 0);
	}
	else
	{
		numb2 = va_arg(ap, int);
		count = ft_putnbr_undec(numb2, 0);
	} 
	return (count);
}
