CC      = gcc
CFLAGS  = -std=c23 -Wall -Wextra -pedantic
TARGET  = hello
SRC     = hello.c
OUTPUT  = output.txt

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

output: $(TARGET)
	./$(TARGET) > $(OUTPUT)

clean:
	rm -f $(TARGET) $(OUTPUT)
