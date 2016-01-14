/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 13:52:18 by mbouhier          #+#    #+#             */
/*   Updated: 2016/01/14 14:28:09 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdlib.h>

char	*ft_strndup(const char *s1, char s2)
{
	char	*result;
	int		len;
	int 	i;

	len = 0;
	i = 0;
	while (s1[len] != s2)
		len++;
	if (!(result = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		result[i] = s1[i];
		i++;
	}
	return (result);
}
