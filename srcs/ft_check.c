/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 13:08:47 by mbouhier          #+#    #+#             */
/*   Updated: 2016/01/19 13:08:48 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_conv(char *conv, char opt)
{
	if (ft_strlen(conv) == 0)
		return (1);
	if (ft_strlen(conv) > 2)
		return (-1);
	if (*conv == 'l' && *(conv + 1) == '\0' && (opt == 's' || opt == 'c'))
		return (1);
	if ((opt == 's' && *conv != ('l' || '\0')) || (opt == 'S' && *conv != '\0') 
		|| (opt == 'p' && *conv != '\0') || (opt == 'D' && *conv != '\0') ||
		(opt == 'O' && *conv != '\0') || (opt == 'U' && *conv != '\0') ||
		(opt == 'c' && *conv != ('l' || '\0')) ||
		(opt == 'C' && *conv != '\0'))
		return (-1);
	return (1);
}

static int ft_check_end(int *tab, char opt)
{
	if ((tab[1] == 1 || tab[2] > 0 || tab[3] == 1 || tab[5] == 1 ||
		tab[6] == 1)
		&& (opt == 's' || opt == 'S' || opt == 'c' || opt == 'C'))
		return (-1);
	else if (tab[5] == 1 && (opt != 'x' || opt != 'X'))
		return (-1);	
	return (1);
}

static int	ft_flag(char *flags, char opt)
{	
	int	tab[7];
	int	i;

	i = 0;
	while (i < 6)
		tab[i++] = 0;
	while (*flags)
	{
		if (*flags == '-')
			tab[0] = 1;
		else if (*flags == '+')
			tab[1] = 1;
		else if (ft_isdigit(*flags) == 1)
			tab[2] *= 10 + (*flags + '0');
		else if (*flags == ' ')
			tab[3] = 1;
		else if (*flags == '.')
			tab[4] = 1;
		else if (*flags == '#')
			tab[5] = 1;
		else if (*flags == '0')
			tab[6] = 1;
		flags++;
	}
	return (ft_check_end(tab, opt));
}

static int ft_check_start(char *flags, char opt, char *conv)
{
	if (*flags == '%')
	{
		flags++;
		while (*flags != '%')
			flags++;
	}
	return (ft_flag(flags, opt) == 1 && ft_conv(conv, opt) == 1 ? 1 : -1);
}

int	ft_check(t_glob *global)
{
	t_list *check;
	int		result;

	check = global->first;
	result = 0;
	while (check->next)
	{
		result = ft_check_start(check->flags, check->opt, check->conv) == 1 ? 1 : -1;
		if (result == -1)
			break ;
		check = check->next;
	}
	ft_putnbr(result);
	return (result);
}