NAME = phonebook

CPPC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -I.

SRCS = sources/main.cpp\
	   sources/class/PhoneBook.cpp\
	   sources/class/Contact.cpp\
	   sources/command.cpp\

OBJS = $(SRCS:%.cpp=%.o)

all : $(NAME)


%.o : %.cpp 
	$(CPPC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) 
	$(CPPC) $(OBJS) -o $@

clean :
	rm -f $(NAME)

fclean : clean 
	rm -f $(OBJS)

re : fclean $(NAME)

.PHONY: re all clean fclean $(NAME)
