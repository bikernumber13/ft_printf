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



int	ft_printf_part1(t_glob *global, va_list ap, t_list *tmp)
{
	int		result;
	
	/*while (tmp->next)
	{
		ft_putendl(tmp->txt);
		ft_putstr("%\n");
		ft_putendl(tmp->flags);
		ft_putendl(tmp->conv);
		ft_putchar(tmp->opt);
		ft_putchar('\n');
		ft_putendl("-------");
		tmp = tmp->next;
	}*/
	if (ft_check(global) < 0)
		exit(EXIT_FAILURE);
	//result = va_arg(ap ,int);
	while (global->first->next)
	{
		if (ft_strlen(global->first->txt) > 0)
			result += ft_putstr(global->first->txt);
		result += ft_conversion(global->first->conv, ap , 0);
		global->first = global->first->next;	
	}
	return (result);
}