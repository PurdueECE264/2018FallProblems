# Makefile

TARGET = shuf
WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $(WARNING) $(ERROR)

#declare test flags, for example: TESTFLAGS = -DTEST_MAIN -DTEST_SHUF -DTEST_INTER -DTEST_DIV

SRCS =  main.c utility.c shuffle.c

OBJS = $(SRCS:%.c=%.o)

VALGRIND = valgrind --tool=memcheck --verbose --log-file

$(TARGET): $(OBJS)
	$(GCC) $(TESTFLAGS) $(OBJS) -o $(TARGET)
	
.c.o: 
	$(GCC) $(TESTFLAGS) -c $*.c 

#val:
#	$(VALGRIND)=./logfile ./shuf

test1: shuf
	./shuf 4 > output1
	#run diff between output1 expected/expected1
	
test2: shuf
	./shuf 8 > output2
	#run diff between output2 expected/expected2

test3: shuf
	./shuf 11 > output3
	#run diff between output3 expected/expected3

clean:
	rm -f $(OBJS) $(TARGET)
