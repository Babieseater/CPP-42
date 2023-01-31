# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/30 14:51:40 by smayrand          #+#    #+#              #
#    Updated: 2023/01/31 16:09:27 by smayrand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN = '\033[32m'
NONE = '\033[0m'

NAME = Sed

CC = clang++
CFLAGS = -Wall -Werror -Wextra -pthread -std=c++98
AR = ar -rcs

RM = rm -f

SRCS = main.cpp\


OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@echo " ==============="
	@echo $(GREEN) "FULLY	COMPILED" $(NONE)
	
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME) resultat
	@echo $(GREEN) "FULLY	CLEANED" $(NONE)

re: fclean all