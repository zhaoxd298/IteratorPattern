CXX = g++
CFLAGS = -Wall
LDFLAGS = 

target = res
srcs = main.cpp
objs = $(srcs:.cpp=.o)
headers = $(wildcard *.h)


.PHONY: all
all: $(target)

$(target): $(objs) $(headers) FORCE
	$(CXX) $(LDFLAGS) -o $(target) $(objs)
	-rm -f *.o
	./$(target)

$(objs):%.o:%.cpp
	$(CXX) $(CFLAGS) -c -o $@ $<

.PHONY: FORCE
FORCE: 

clean:
	rm -f $(target) *.o

