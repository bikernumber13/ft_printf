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
<<<<<<< HEAD
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
=======
# include <stdio.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_putchar(char c);
void				ft_putstr(char const *s);
size_t				ft_strlen(const char *s);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
>>>>>>> b74cbc02914c532a081cd0ab6da9ff82019bf1e1
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
<<<<<<< HEAD
int 				ft_putnbr(long int n, int count);
=======
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
>>>>>>> b74cbc02914c532a081cd0ab6da9ff82019bf1e1
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
<<<<<<< HEAD
=======
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
>>>>>>> b74cbc02914c532a081cd0ab6da9ff82019bf1e1
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_printf(const char *format, ...);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
<<<<<<< HEAD
int 				ft_check(const char *format, va_list ap, t_list *global);
int 				ft_print_char(const char *format, va_list ap, int count);
int 				ft_print_decimal(const char *format, va_list ap, int count);
int  				ft_print_octal(const char *format, va_list ap, int count);
int					ft_putnbr_octal(long unsigned int n, int count);
int 				ft_print_undec(const char *format, va_list ap, int count);
int					ft_putnbr_undec(long unsigned int n, int count);
int					ft_putnbr_hexa(long int n, int count);

#endif
=======

#endif
>>>>>>> b74cbc02914c532a081cd0ab6da9ff82019bf1e1
