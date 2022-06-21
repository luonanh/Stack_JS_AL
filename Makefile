CC=gcc
CFLAGS=-g -Wall -std=c99
OBJS=stack_array.o stack_ll.o
BIN=main
SUBMITNAME=project.zip

all:$(BIN)

$(BIN):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r $(BIN) *.o *.dSYM $(SUBMITNAME)

submit:
	$(RM) $(SUBMITNAME)
	zip $(SUBMITNAME) $(BIN)
