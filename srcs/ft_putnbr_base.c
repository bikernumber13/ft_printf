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

int ft_putnbr_base(int n, char *base, int result)
{
	if (n == -2147483648)
	{
		ft_putnbr_base(-214748364, base, result);
		ft_putnbr_base(8, base, result);
		result += 11;
	}
	else
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar('-');
			result += 1;
		}
		if (n > (int)ft_strlen(base))
		{
			ft_putnbr_base(n / (int)ft_strlen(base), base, result);
			ft_putnbr_base(n % (int)ft_strlen(base), base, result);
		}
		else
		{
			ft_putchar(base[n]);
			result += 1;
		}
	}
	return (result);
}