/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:21:15 by mbouhier          #+#    #+#             */
/*   Updated: 2015/12/04 17:46:16 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t		ft_strlen(const char *s)
{
	size_t		size;

	size = 0;
	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}
