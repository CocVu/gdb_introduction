CXX=g++
CC=g++
OBJDIR=./obj/
VPATH=./src/

EXEC= simple_gdb

COMMON+= -DOPENCV
CFLAGS+= -g
LDFLAGS+= `pkg-config --libs opencv`
COMMON+= `pkg-config --cflags opencv`

OBJ=simple_gdb.o

OBJS = $(addprefix $(OBJDIR), $(OBJ))

$(OBJDIR)%.o: %.c $(DEPS)
	$(CXX)  -std=c++11 $(COMMON) $(CFLAGS) -c $< -o $@

$(EXEC): $(OBJS)
	$(CC) $(COMMON) $(CFLAGS) $^ -o $@ $(LDFLAGS)

$(EXECXX): $(OBJS)
	$(CXX) $(COMMON) $(CFLAGS) $^ -o $@ $(LDFLAGS)

all: obj $(EXEC)

run: $(EXEC)
	./$(EXEC)
obj:
	mkdir -p obj
