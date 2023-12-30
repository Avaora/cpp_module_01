CXX = c++
CXXFLAGS = -Wall -Wextra -Werror
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = ref

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