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

int	ft_putnbr_undec(long unsigned int n, int count)
{
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
	return (count);
}
