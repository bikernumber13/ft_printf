/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 11:10:44 by mbouhier          #+#    #+#             */
/*   Updated: 2016/01/09 11:10:50 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*int	ft_check_arg(va_list ap, t_list *global)
{
	return (0);
}*/

int	ft_check_format(const char *format, va_list ap, t_list *global)
{
	while (*format)
	{
		while (*format != '%' && *format)
		{
			ft_putchar(*format);
			global->ret++; 
			format++;
		}
		if ( *format == 's' || *format == 'S')
			global->ret += ft_print_char(format, ap, 0);
		else if (*format == 'd' || *format == 'i' || *format == 'D')
			global->ret += ft_print_decimal(format, ap, 0);
		else if (*format == 'o' || *format == 'O')
			global->ret += ft_print_octal(format, ap, 0);
		else if (*format == 'u' || *format == 'U')
			global->ret += ft_print_undec(format, ap, 0);
		else if (*format == 'x' || *format == 'X')
			global->ret += ft_print_unhexa();
		else if (*format == 'c' || *format == 'C')
			global->ret += ft_print_int_unchar();
		else if (*format == 'p')
			global->ret += ft_print_hexa(format, ap, 0);
		format++;
	}
	return (0);
}

int ft_check(const char *format, va_list ap, t_list *global)
{
	ap = 0;
	if (ft_check_format(format, ap, global) == -1)
		return (-1);
	//if (ft_check_arg(ap, global) == -1)
	//	return (-1);
	return (0);
}