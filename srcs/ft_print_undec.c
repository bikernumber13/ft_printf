/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_undec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 20:15:04 by mbouhier          #+#    #+#             */
/*   Updated: 2016/01/09 20:15:05 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_print_undec(const char *format, va_list ap, int count)
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