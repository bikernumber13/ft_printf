/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/03 11:41:18 by mbouhier          #+#    #+#             */
/*   Updated: 2016/01/06 16:34:05 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <string.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct		s_list
{
	int 			ret;
	char			*option;
	char			*flags_1;
	char			*flags_2;
	struct s_list	*next;
}					t_list;

void				ft_putchar(char c);
void				ft_putstr(char const *s);
size_t				ft_strlen(const char *s);
void				ft_putendl(char const *s);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int 				ft_putnbr(long int n, int count);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_memdel(void **ap);
void				*ft_memalloc(size_t size);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_atoi(const char *str);
char				*ft_itoa(int n);
char				**ft_strsplit(char const *s, char c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_printf(const char *format, ...);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
int 				ft_check(const char *format, va_list ap, t_list *global);
int 				ft_print_char(const char *format, va_list ap, int count);
int 				ft_print_decimal(const char *format, va_list ap, int count);
int  				ft_print_octal(const char *format, va_list ap, int count);
int					ft_putnbr_octal(long unsigned int n, int count);
int 				ft_print_undec(const char *format, va_list ap, int count);
int					ft_putnbr_undec(long unsigned int n, int count);
int					ft_putnbr_hexa(long int n, int count);

#endif