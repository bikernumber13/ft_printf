/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:22:19 by mbouhier          #+#    #+#             */
/*   Updated: 2015/12/04 14:42:17 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int	count;

	count = 0;
	if (s && f)
	{
		while (s[count] != '\0')
		{
			(*f)(&s[count]);
			count++;
		}
	}
}
