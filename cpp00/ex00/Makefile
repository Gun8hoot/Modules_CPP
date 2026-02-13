NAME = megaphone

CPPC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -c

SRCS = megaphone.cpp
OBJS = $(SRCS:%.c=%.o)

%.o: %.c
	$(CPPC) $(CFLAGS) $@ -o $<

all: $(NAME)

$(NAME):
	$(CPPC) $(OBJS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OBJS)

re: fclean $(NAME)
