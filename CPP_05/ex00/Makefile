# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 12:56:38 by smayrand          #+#    #+#              #
#    Updated: 2023/04/11 16:21:45 by smayrand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


GREEN = '\033[32m'
NONE = '\033[0m'

NAME = Bureaucrat

CC = clang++
CFLAGS = -Wall -Werror -Wextra  -std=c++98


RM = rm -f

SRCS = main.cpp\
Bureaucrat.cpp



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
