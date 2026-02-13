NAME = megaphone

CPPC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp
OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPPC) $(OBJS) -o $@

%.o: %.c
	$(CPPC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OBJS)

re: fclean $(NAME)
