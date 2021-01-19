CC = g++
CFLAGS = -std=c++11
SRC = euler.cpp
EXEC = euler.out

build:
	$(CC) $(SRC) $(CFLAGS) -o $(EXEC)

	# execute program
	@./$(EXEC)

clean:
	rm $(EXEC)