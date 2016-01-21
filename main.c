/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 11:04:34 by mbouhier          #+#    #+#             */
/*   Updated: 2016/01/13 17:11:46 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libftprintf.h"

int	main(void)
{
	int result;
	char	test[5] = "hihi";

	result = 0;
	result = ft_printf("Bonjour %%10 ,%10.3s", test);
	ft_putendl("\n------FINAL-------");	
	ft_putnbr(result);
	return (0);
}
