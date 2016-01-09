/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 14:52:31 by mbouhier          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2016/01/09 13:48:48 by mbouhier         ###   ########.fr       */
=======
/*   Updated: 2016/01/06 14:52:42 by mbouhier         ###   ########.fr       */
>>>>>>> b74cbc02914c532a081cd0ab6da9ff82019bf1e1
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
<<<<<<< HEAD
			exit(EXIT_FAILURE);
		}
	return (0);
}
=======
			exit(0);
		}
	return (0);
}
>>>>>>> b74cbc02914c532a081cd0ab6da9ff82019bf1e1
