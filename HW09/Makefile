TARGET = shuf
GCC = gcc
CFLAGS = -g -std=c99 -Wall -Wshadow -Wvla -Werror -pedantic
CC = $(GCC) $(CFLAGS)

SRCS = #please complete

OBJS = $(SRCS:%.c=%.o)
VALGRIND = valgrind --tool=memcheck --verbose --log-file

TESTFALGS = #please complete

$(TARGET): $(OBJS)
	$(CC) $(TESTFALGS) $(OBJS) -o $(TARGET)

testmemory: $(TARGET)
	$(VALGRIND)=./valgrind.log ./shuf

test1: shuf
	./shuf 2 2 | sort > output1
	#perform diff between output1 and expected/expected1

test2: shuf
	./shuf 4 3 | sort > output2
	#perform diff between output2 and expected/expected2

test2: shuf
	./shuf 7 2 | sort > output3
	#perform diff between output3 and expected/expected3	

.c.o:
	$(GCC) $(CFLAGS) -c $*.c

clean:
	rm -f $(OBJS) $(TARGET)
