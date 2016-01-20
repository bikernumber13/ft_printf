/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 11:06:05 by mbouhier          #+#    #+#             */
/*   Updated: 2016/01/20 11:06:06 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_putnbr_base(int n, char *base, t_glob *global)
{
	if (n == -2147483648)
	{
		ft_putnbr_base(-214748364, base, global);
		ft_putnbr_base(8, base, global);
		global->ret += 11;
	}
	else
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar('-');
			global->ret += 1;
		}
		if (n > (int)ft_strlen(base))
		{
			ft_putnbr_base(n / (int)ft_strlen(base), base, global);
			ft_putnbr_base(n % (int)ft_strlen(base), base, global);
		}
		else
		{
			ft_putchar(base[n]);
			global->ret += 1;
		}
	}
}