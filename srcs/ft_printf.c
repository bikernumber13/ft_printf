/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/03 11:16:59 by mbouhier          #+#    #+#             */
/*   Updated: 2016/01/03 11:30:17 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_iniglobal(const char *format, va_list ap,t_list *global)
{
	if (!(global = (t_list*)malloc(sizeof(t_list))))
		return (-1);
	if (!(global->option = ft_strdup("sSpdDioOuUxXcC")))
		return (-1);
	if (!(global->flags_1 = ft_strdup("#0-+ ")))
		return (-1);
	if (!(global->flags_2 = ft_strdup("hljz")))
		return (-1);
	ft_check(format, ap, global);
	return (0);
}

int		ft_printf(const char *format, ...)
{
	va_list ap;
	t_list	*global;
	
	global = NULL;
	va_start (ap, format);
	if (ft_iniglobal(format, ap, global) == -1)
		return (-1);
	va_end (ap);
	return (global->ret);
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