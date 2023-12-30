CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors
RM = rm -f
SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = harl

all : $(NAME)
$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
$(OBJS) : $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -c
clean :
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)
re : fclean all
.PHONY : all clean fclean re