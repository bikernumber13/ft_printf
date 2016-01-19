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
	int		numb = 42;
	char	test[5] = "hihi\n";

	if (ft_printf("Bonjour %2lc, %%10, %2.4s", numb, test) == -1)
		{
			ft_putendl("Error");
			exit(EXIT_FAILURE);
		}
	return (0);
}
