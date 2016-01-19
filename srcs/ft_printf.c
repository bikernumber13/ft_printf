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

static int		ft_iniglobal(const char *format, t_glob **global)
{
	t_glob *new_glob;

	if (!(*global = (t_glob*)malloc(sizeof(t_glob))))
		return (-1);
	new_glob = *global;
	if (!(new_glob->first = (t_list*)malloc(sizeof(t_list))))
		return (-1);
	if (!(new_glob->option = ft_strdup("sSpdiDoOuUxXcC")))
		return (-1);
	if (!(new_glob->flags_off = ft_strdup("#0-+ .")))
		return (-1);
	if (!(new_glob->conv_off = ft_strdup("hljz")))
		return (-1);
	if (ft_parse(format, new_glob, new_glob->first) < 0)
		return (-1);
	return (0);
}

int		ft_printf(const char *format, ...)
{
	va_list ap;
	t_glob	*global;
	int     result;

	global = NULL;
	va_start (ap, format);
	if (ft_iniglobal(format, &global) == -1)
		return (-1);
	result = ft_printf_part1(global, ap, global->first);
	va_end (ap);
	// FREEEEEEEEEEEEEEEE
	return (result);
}
/*
options
s == char *
S == ls 
p == void * == hexadecimal (0x)
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
# == ajoute 0 octal non nul, 0x pour '#x', 0X pour '#X' => int
0 == indique le remplissage avec des zeros => int
- == justifie a gauche du champ => int
+ == signe + ou - imprime => int
space == laisse un espace devant un nombre positif pour egal en longueur a un nombre negatif => int
. / * == precision => char

Ordre des precisions :
1) '-' on colle ou pas a gauche
2) 'numbers' == numbre d espaces avant l impression
3) '.' == si < taille champ, on remplis de 0. Si > taille champ, 0 ecrase les espaces
4) ' ' == space before printf == longueur d un negatif 
5) '+' == affiche + ou - => end	
5) '#' == affiche 0, ou 0x ou 0X => end
*/
