/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 11:06:54 by mbouhier          #+#    #+#             */
/*   Updated: 2016/01/12 11:06:57 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_iniglobal(const char *format, t_glob *global)
{
	t_list *list;

	if (!(list = (t_list*)malloc(sizeof(t_list))))
		return (-1);
	if (!(global = (t_glob*)malloc(sizeof(t_glob))))
		return (-1);
	if (!(global->option = ft_strdup("sSpdDioOuUxXcC")))
		return (-1);
	if (!(global->flags_off = ft_strdup("#0-+ ")))
		return (-1);
	if (!(global->conv_off = ft_strdup("hljz")))
		return (-1);
	global->first = list;
	global->first->txt = NULL;
	if (ft_parse(format, global) < 0)
		return (-1);
	 //CODE SUIVANT A ENLEVER : TEST LISTE CHAINEE 
	while (global->first->next)
	{
		ft_putstr("texte : ");
		ft_putendl(global->first->txt);
		ft_putendl("%");
		ft_putstr("flags : ");
		ft_putendl(global->first->flags);
		if (ft_strcmp(global->first->flags, global->first->conv) != 0)
		{
			ft_putstr("conv : ");
			ft_putendl(global->first->conv);
		}
		ft_putstr("opt : ");
		ft_putchar(global->first->opt);
		ft_putchar('\n');
		global->first = global->first->next;
	}
	return (0);
}

int		ft_printf(const char *format, ...)
{
	va_list ap;
	t_glob	*global;
	
	global = NULL;
	va_start (ap, format);
	if (ft_iniglobal(format, global) == -1)
		return (-1);
	va_end (ap);
	return (0);
}
/*
options
s == char *
S == ls 
p == void * == hexadecimal
d == int => chiffre decimal signe
D == long int => signe decimal
i == int => chiffre decimal signe
o == unsigned int => chiffre octal non signe
O == long int => non signe octal
u == unsigned int => chiffre decimal non signe
U == long int => non signe decimal
x == unsigned int => chiffre hexadecimal non signe (on utilise "abcdef")
X == unsigned int => chiffre hexadecimal non signe (on utilise "ABCDEF")
c == int => unsigned char
C == lc 
--------------------------
flags
hh == (d & i => signed char), (o & u & x & X => unsigned char) 
h == (d & i => short int), (o & u & x & X => unsigned short int) 
l == (d & i => long int), (o & u & x & X => unsigned long int), (c => wint_t), (s => wchar_t *)
ll == (d & i => long long int), (o & u & x & X => unsigned long long int)
j == (d & i => intmax_t), (o & u & x & X => uintmax_t)
z == size_t or ssize_t
--------------------------
autres
%% == affiche un '%'
# == la valeur doit etre convertie dans une autre forme 
0 == indique le remplissage avec des zeros
- == justifie a gauche du champ
+ == signe + ou - imprime
space == laisse un espace devant un nombre positif pour egal en longueur a un nombre negatif
taille min du champ
. / * == precision
*/
