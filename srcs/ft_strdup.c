/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:56:36 by mbouhier          #+#    #+#             */
/*   Updated: 2016/01/08 13:19:30 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*result;

	if ((result = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + 1))) == NULL)
		return (NULL);
	return ((char *)(ft_strcpy(result, s1)));
}
