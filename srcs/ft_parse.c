/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 11:05:44 by mbouhier          #+#    #+#             */
/*   Updated: 2016/01/12 11:05:48 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_parse2(char *tmp, char format, t_glob *global, t_list *list)
{
	int		i;
	char	*save;

	save = tmp;
	while (*save != format)
	{
		i = 0;
		while (global->conv_off[i])
		{
			if (*save == global->conv_off[i])
			{
				list->flags = ft_strndup(tmp, *save);
				return (ft_strndup(save, format)); 
			}
			i++;
		}
		save++;
	}
	list->flags = ft_strndup(tmp, format);
	return (ft_strdup(list->flags));
}

char		*ft_parse1(const char *format, t_glob *global, t_list *list, int i)
{
	char	*tmp;

	tmp = (char *)format;
	while (*format)
	{
		i = 0;
		while (global->option[i])
		{
			if (*format == global->option[i])
			{
				list->opt = *format;
				if (!(list->conv = ft_parse2(tmp, *format, global, list)))
					exit(EXIT_FAILURE);
				return (ft_strchr(tmp, (char)*format));
			}
			i++;
		}
		format++;
	}
	if (global->first->flags == NULL)
		exit(EXIT_FAILURE);
	return (ft_strchr(tmp, (char)*format));
}

int			ft_parse(const char *format, t_glob *global)
{
	t_list	*list;
	char	*tmp;
	char	*tmp2;

	list = global->first;
	while (*format)
	{
		tmp2 = (char*)format;
		while (*format != '%' && *format)
			format++;
		if (!(list->txt = ft_strndup(tmp2, *format)))
			return (-1);
		format++;
		if ((tmp = ft_parse1(format, global, list, 0)) != '\0')
		{
			if (!(list->next = (t_list*)malloc(sizeof(t_list))))
				return (-1);
			list = list->next;
			list->next = NULL;
		}
		if (!(format = ft_strdup(tmp)))
			exit(EXIT_FAILURE);
		format++;
	}
	return (0);
}
