# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 13:41:36 by smayrand          #+#    #+#              #
#    Updated: 2022/12/20 14:25:46 by smayrand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN = '\033[32m'
NONE = '\033[0m'

NAME = megaphone

CC = clang++
CFLAGS = -Wall -Werror -Wextra -pthread -std=c++98
AR = ar -rcs

RM = rm -f

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	@echo " ==============="
	@echo $(GREEN) "FULLY	COMPILED" $(NONE)
	
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)
	@echo $(GREEN) "FULLY	CLEANED" $(NONE)

re: fclean all