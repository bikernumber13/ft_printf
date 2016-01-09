/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboukra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:35:57 by maboukra          #+#    #+#             */
/*   Updated: 2016/01/04 14:48:07 by maboukra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

<<<<<<< HEAD
int	ft_putnbr(long int n, int count)
{
	if (n == -2147483648)
	{
		ft_putnbr(-214748364, count);
		ft_putnbr(8, count);
=======
void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putnbr(-214748364);
		ft_putnbr(8);
>>>>>>> b74cbc02914c532a081cd0ab6da9ff82019bf1e1
	}
	else
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar('-');
<<<<<<< HEAD
			count++;
		}
		if (n > 9)
		{
			ft_putnbr(n / 10, count);
			ft_putnbr(n % 10, count);
		}
		else
		{
			ft_putchar(n + '0');
			count++;
		}
	}
	return (count);
=======
		}
		if (n > 9)
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
		else
			ft_putchar(n + '0');
	}
>>>>>>> b74cbc02914c532a081cd0ab6da9ff82019bf1e1
}
