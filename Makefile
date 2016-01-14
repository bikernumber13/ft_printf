# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbouhier <mbouhier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/12 11:03:58 by mbouhier          #+#    #+#              #
#    Updated: 2016/01/12 11:04:06 by mbouhier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wextra -Werror -Wall

SRCS_PATH = ./srcs/
INCLUDES_PATH = ./includes/
OBJ_PATH = ./obj/

SRCS_NAME = ft_printf.c ft_parse.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
			ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcpy.c ft_memdel.c \
			ft_memmove.c ft_memcmp.c ft_memset.c ft_putchar.c ft_putchar_fd.c \
			ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c \
		   ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c \
		   ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c \
		   ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c \
		   ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c \
		   ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c \
		   ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_strndup.c

SRCO = $(SRCS_NAME:.c=.o)

SRC = $(addprefix $(SRCS_PATH), $(SRCS_NAME))
INC = $(addprefix -I, $(INCLUDES_PATH))
OBJ = $(addprefix $(OBJ_PATH), $(SRCO))

all : $(NAME)

$(NAME) :
	@clear
	@echo "\033[32m"
	echo  "\033[1000A";
	@echo "      :::::::::: :::::::::::           :::::::::  :::::::::  ::::::::::: ::::    ::: ::::::::::: :::::::::: "
	@echo "     :+:            :+:               :+:    :+: :+:    :+:     :+:     :+:+:   :+:     :+:     :+:         "
	@echo "    +:+            +:+               +:+    +:+ +:+    +:+     +:+     :+:+:+  +:+     +:+     +:+          "
	@echo "   :#::+::#       +#+               +#++:++#+  +#++:++#:      +#+     +#+ +:+ +#+     +#+     :#::+::#      "
	@echo "  +#+            +#+               +#+        +#+    +#+     +#+     +#+  +#+#+#     +#+     +#+            "
	@echo " #+#            #+#               #+#        #+#    #+#     #+#     #+#   #+#+#     #+#     #+#             "
	@echo "###            ###    ########## ###        ###    ### ########### ###    ####     ###     ###              "
	@sleep 0.05
	@echo "\n\t\t\t\t\t\tMAKE ALL       "
	@sleep 0.1
	@echo "\033[0m"
	@gcc $(FLAGS) $(INC) -c $(SRC)
	@mv $(SRCO) $(OBJ_PATH)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@##		ENLEVER LIGNES DE COMPILATION SUIVANTES     ##
	@gcc $(FLAGS) main.c libftprintf.a -o ft_printf
	@echo "\033[36m\n\n\t\t\t\t\tlibftprintf.a is done !!\033[0m"
	@sleep 1

clean :
	@rm -f $(OBJ)
	@sleep 0.05
	@clear
	@echo "\033[31m"
	@echo "\033[1000A"
	@echo "      :::::::::: :::::::::::           :::::::::  :::::::::  ::::::::::: ::::    ::: ::::::::::: :::::::::: "
	@sleep 0.05
	@echo "     :+:            :+:               :+:    :+: :+:    :+:     :+:     :+:+:   :+:     :+:     :+:         "
	@sleep 0.05
	@echo "    +:+            +:+               +:+    +:+ +:+    +:+     +:+     :+:+:+  +:+     +:+     +:+          "
	@sleep 0.05
	@echo "   :#::+::#       +#+               +#++:++#+  +#++:++#:      +#+     +#+ +:+ +#+     +#+     :#::+::#      "
	@sleep 0.05
	@echo "  +#+            +#+               +#+        +#+    +#+     +#+     +#+  +#+#+#     +#+     +#+            "
	@sleep 0.05
	@echo " #+#            #+#               #+#        #+#    #+#     #+#     #+#   #+#+#     #+#     #+#             "
	@sleep 0.05
	@echo "###            ###    ########## ###        ###    ### ########### ###    ####     ###     ###              "
	@echo "\n\t\t\t\t\t\tMAKE CLEAN     "
	@sleep 0.1
	@echo "\033[0m"


fclean : clean
	@rm -f $(NAME)
	@## ENLEVER LA LIGNE SUIVANTE ##
	@rm -f ft_printf
	@sleep 0.05
	@echo "\033[34m"
	@echo "\033[1000A"
	@echo "      :::::::::: :::::::::::           :::::::::  :::::::::  ::::::::::: ::::    ::: ::::::::::: :::::::::: "
	@sleep 0.05
	@echo "     :+:            :+:               :+:    :+: :+:    :+:     :+:     :+:+:   :+:     :+:     :+:         "
	@sleep 0.05
	@echo "    +:+            +:+               +:+    +:+ +:+    +:+     +:+     :+:+:+  +:+     +:+     +:+          "
	@sleep 0.05
	@echo "   :#::+::#       +#+               +#++:++#+  +#++:++#:      +#+     +#+ +:+ +#+     +#+     :#::+::#      "
	@sleep 0.05
	@echo "  +#+            +#+               +#+        +#+    +#+     +#+     +#+  +#+#+#     +#+     +#+            "
	@sleep 0.05
	@echo " #+#            #+#               #+#        #+#    #+#     #+#     #+#   #+#+#     #+#     #+#             "
	@sleep 0.05
	@echo "###            ###    ########## ###        ###    ### ########### ###    ####     ###     ###              "
	@echo "\n\t\t\t\t\t\tMAKE FCLEAN      "
	@sleep 0.1
	@echo "\033[0m"

re : fclean all
	@sleep 0.05
	@echo "\033[36m"
	@echo "\033[10000A"
	@echo "      :::::::::: :::::::::::           :::::::::  :::::::::  ::::::::::: ::::    ::: ::::::::::: :::::::::: "
	@sleep 0.05
	@echo "     :+:            :+:               :+:    :+: :+:    :+:     :+:     :+:+:   :+:     :+:     :+:         "
	@sleep 0.05
	@echo "    +:+            +:+               +:+    +:+ +:+    +:+     +:+     :+:+:+  +:+     +:+     +:+          "
	@sleep 0.05
	@echo "   :#::+::#       +#+               +#++:++#+  +#++:++#:      +#+     +#+ +:+ +#+     +#+     :#::+::#      "
	@sleep 0.05
	@echo "  +#+            +#+               +#+        +#+    +#+     +#+     +#+  +#+#+#     +#+     +#+            "
	@sleep 0.05
	@echo " #+#            #+#               #+#        #+#    #+#     #+#     #+#   #+#+#     #+#     #+#             "
	@sleep 0.05
	@echo "###            ###    ########## ###        ###    ### ########### ###    ####     ###     ###              "
	@echo "\n\t\t\t\t\t\tMAKE RE      "
	@sleep 0.1
	@echo "\033[0m"

.PHONY : all re clean fclean
