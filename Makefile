# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/03 11:42:09 by mbouhier          #+#    #+#              #
#    Updated: 2016/01/06 15:37:48 by mbouhier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wextra -Werror -Wall

SRCS_PATH = ./srcs/
INCLUDES_PATH = ./includes/
OBJ_PATH = ./obj/

SRCS_NAME = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstadd.c ft_lstdel.c \
			ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c \
			ft_memalloc.c ft_memchr.c ft_memdel.c ft_memset.c ft_printf.c \
			ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c \
			ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c \
			ft_strchr.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_striter.c \
			ft_strjoin.c ft_striteri.c ft_strlen.c ft_strnew.c ft_strrchr.c \
			ft_strsplit.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c 

SRCO = $(SRCS_NAME:.c=.o)

SRC = $(addprefix $(SRCS_PATH), $(SRCS_NAME))
INC = $(addprefix -I, $(INCLUDES_PATH))
OBJ = $(addprefix $(OBJ_PATH), $(SRCO))

all : $(NAME)

$(NAME) :
	@echo "\033[2J"
	@echo "\033[100A"
	@echo "\033[32m"
	@echo "      :::::::::: :::::::::::           :::::::::  :::::::::  ::::::::::: ::::    ::: ::::::::::: :::::::::: "
	@echo "     :+:            :+:               :+:    :+: :+:    :+:     :+:     :+:+:   :+:     :+:     :+:         "
	@echo "    +:+            +:+               +:+    +:+ +:+    +:+     +:+     :+:+:+  +:+     +:+     +:+          "
	@echo "   :#::+::#       +#+               +#++:++#+  +#++:++#:      +#+     +#+ +:+ +#+     +#+     :#::+::#      "
	@echo "  +#+            +#+               +#+        +#+    +#+     +#+     +#+  +#+#+#     +#+     +#+            "
	@echo " #+#            #+#               #+#        #+#    #+#     #+#     #+#   #+#+#     #+#     #+#             "
	@echo "###            ###    ########## ###        ###    ### ########### ###    ####     ###     ###              "
	@sleep 0.05
	@echo "\n\t\t\t\t\t\tMAKE ALL       "
	@echo "\033[0m"
	@gcc $(FLAGS) $(INC) -c $(SRC)
	@mv $(SRCO) $(OBJ_PATH)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean :
	@rm -f $(OBJ)
	@sleep 0.05
	@echo "\033[2J"
	@echo "\033[100A"
	@echo "\033[31m"
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
	@echo "\033[0m"


fclean : clean
	@rm -f $(NAME)
	@sleep 0.05
	@echo "\033[100A"
	@echo "\033[34m"
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
	@echo "\033[0m"

re : fclean all
	@sleep 0.05
	@echo "\033[100A"
	@echo "\033[36m"
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
	@echo "\033[0m"

yoyo :
	@echo "\033[2J"
	@echo "\033[100A"
	@echo "\033[32m"
	@echo "."
	@sleep 0.2
	@echo "\033[2A"
	@echo "\033[K"
	@echo "\033[2A"
	@echo ".."
	@sleep 0.2
	@echo "\033[2A"
	@echo "\033[K"
	@echo "\033[2A"
	@echo "..."
	@echo "\033[0m"
	@sleep 0.2
	@echo "\033[2A"
	@echo "\033[K"
	@echo "\033[2A"
	@echo "\033[2J"
	@echo "\033[100A"
	@echo "\033[32m"
	@echo "."
	@sleep 0.2
	@echo "\033[2A"
	@echo "\033[K"
	@echo "\033[2A"
	@echo ".."
	@sleep 0.2
	@echo "\033[2A"
	@echo "\033[K"
	@echo "\033[2A"
	@echo "..."
	@echo "\033[0m"
	@sleep 0.2
	@echo "\033[2A"
	@echo "\033[K"
	@echo "\033[2A"
	@echo "\033[2J"
	@echo "\033[100A"
	@echo "\033[32m"
	@echo "."
	@sleep 0.2
	@echo "\033[2A"
	@echo "\033[K"
	@echo "\033[2A"
	@echo ".."
	@sleep 0.2
	@echo "\033[2A"
	@echo "\033[K"
	@echo "\033[2A"
	@echo "..."
	@echo "\033[0m"
	@sleep 0.2
	@echo "\033[2A"
	@echo "\033[K"
	@echo "\033[2A"



.PHONY : all re clean fclean
