/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:15:38 by mbouhier          #+#    #+#             */
/*   Updated: 2016/01/21 14:58:08 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_print_2(char *str, int len, int result)
{
	int		i;

	i = 0;
	if (len <= 0)
		len = ft_strlen(str);
	else if (len > (int)ft_strlen(str))
	{
		while (++i <= (len - (int)ft_strlen(str)))
		{
			ft_putchar(' ');
			result++;
		}
		len = ft_strlen(str);
	}
	while (--len >= 0)
	{
		ft_putchar(*str);
		str++;
		result++;
	}
	return (result);
}

static int	ft_flags_2(char *str, char *flags, int result, int len)
{
	char	*tmp;
	int		i;

	i = 0;
	if ((tmp = ft_strchr(flags, '.')) != NULL)
	{
		tmp++;
		len = (ft_atoi(tmp) > (int)ft_strlen(str)) 
		? (int)ft_strlen(str) : ft_atoi(tmp);
		while (++i <= (ft_atoi(flags) - len))
		{
			ft_putchar(' ');
			result++;
		}
		if (ft_isdigit(*(tmp + ft_strlen(tmp))) == 1)
			exit(EXIT_FAILURE);
	}
	else
	{
		while (ft_isdigit(*flags) == 0)
			flags++;
		len = ft_atoi(flags) < (int)ft_strlen(str) ? 0 : ft_atoi(flags);
		if (ft_isdigit(*(flags + ft_strlen(flags))) == 1)
			exit(EXIT_FAILURE);
	}
	return (ft_print_2(str, len, result));
}

static int	ft_print_1(char *str, int spaces, int len, int result)
{
	while (len--)
	{
		ft_putchar(*str);
		str++;
		result++;
	}
	while (spaces--)
	{
		ft_putchar(' ');
		result++;
	}
	return (result);
}

static int	ft_flags_1(char *str, char *flags, int len)
{
	char 	*tmp;

	if ((tmp = ft_strchr(flags, '.')) != NULL)
	{
		tmp++;
		len = (ft_atoi(tmp) > (int)ft_strlen(str)) 
		? (int)ft_strlen(str) : ft_atoi(tmp);
		if (ft_isdigit(*(tmp + ft_strlen(tmp))) == 1)
			exit(EXIT_FAILURE);
	}
	flags++;
	len = len == 0 ? ft_strlen(str) : len;
	return (ft_print_1(str, (ft_atoi(flags) - len), len, 0));
}

int			ft_string(va_list ap, char *flags, int result)
{
	char	*str;

	str = va_arg(ap, char*);
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
		flags++;
	}
	if (ft_strchr(flags, '-') != NULL && *flags != '-')
		exit(EXIT_FAILURE);
	result += *flags == '-' ? ft_flags_1(str, flags, 0) : ft_flags_2(str, flags, 0, 0);
	return (result);
}
