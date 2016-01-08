/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 14:52:31 by mbouhier          #+#    #+#             */
/*   Updated: 2016/01/06 14:52:42 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libftprintf.h"

int	main(void)
{
	int		numb = 42;
	char	test[6] = "hihi\n";
	
	if (ft_printf("Bonjour %d, %s", numb, test) == -1)
		{
			ft_putendl("Error");
			exit(0);
		}
	return (0);
}