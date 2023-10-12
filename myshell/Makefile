# Compiler to use
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra

# Linker flags
LDFLAGS = -lreadline

# Object files
OBJS = shell.o exec.o helper_functions.o

# Target binary
TARGET = myshell

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(LDFLAGS)

shell.o: shell.c
	$(CC) $(CFLAGS) -c shell.c

exec.o: exec.c
	$(CC) $(CFLAGS) -c exec.c

helper_functions.o: helper_functions.c
	$(CC) $(CFLAGS) -c helper_functions.c

clean:
	rm -f $(OBJS) $(TARGET)
