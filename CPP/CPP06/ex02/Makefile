# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dilovancandan <dilovancandan@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 14:50:10 by dilovancand       #+#    #+#              #
#    Updated: 2024/01/24 14:21:10 by dilovancand      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
SOURCES = main.cpp Base_class.cpp
			
OBJECTS = $(SOURCES:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

all: ${NAME}

%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

${NAME}: ${OBJECTS}
	$(CC) $(CFLAGS) -o ${NAME} ${OBJECTS}

clean:
	rm -f ${OBJECTS}
	
fclean: clean
	rm -f ${NAME}

re: fclean all