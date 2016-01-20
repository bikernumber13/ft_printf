//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_part1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 09:51:17 by mbouhier          #+#    #+#             */
/*   Updated: 2016/01/18 09:51:18 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_print_end(va_list ap, t_list *tmp, char *conv, int result)
{
	if (opt == 's' && *conv = '\0')
		result += ft_string(ap, tmp, tmp->flags, 0);
	else if (opt == 'S' || (opt == 's' && *conv = 'l'))
		result += ft_wchar();
	else if (opt == 'C' || (opt == 'c' && *conv = 'l')) 
		result += ft_wint();
	else if (opt == 'p' || opt == 'x' || opt == 'X')
		result += ft_hexa();
	else if ((opt == 'o' || opt == 'O') && *conv = '\0')
		result += ft_octal();
	else if (*conv == 'j')
		result += ft_intmax();
	else if (*conv == 'z')
		result += ft_sizet();
	else if ((opt == 'c' && *conv = '\0') || (*conv == 'h' && *(conv + 1) == 'h'))
		result += ft_char();
	else
		result += ft_int();
	//result += ft_print_flags(tmp->flags, 0);
	return (result);
}

int	ft_print_flags(char *flags, int result)
{
	if (*flags == '%')
	{
		ft_putchar(*flags);
		result++;
		flags++;
		while (*flags != '%')
			{
				ft_putchar(*flags);
				result++;
				flags++;
			}
	} 
	return (result);
}

int			ft_printf_part1(t_glob *global, va_list ap, t_list *tmp, int result)
{
	int prout;
	if (ft_check(tmp, 0) < 0)
		exit(EXIT_FAILURE);
	prout = va_arg(ap, int);
	while (global->first->next)
	{
		if (ft_strlen(global->first->txt) > 0)
			result += ft_putstr(global->first->txt);
		result += ft_print_end(ap, global->first, global->first->conv, 0);
		global->first = global->first->next;	
	}
	return (result);
}