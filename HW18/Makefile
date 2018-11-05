WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $(WARNING) $(ERROR) 

TESTFLAGS = -DTEST_MAIN -DTEST_FUSE -DTEST_CENT -DTEST_DIST -DTEST_LINKEDLISTCREATE -DTEST_CREATENODE

SRCS = main.c hw18.c
OBJS = $(SRCS:%.c=%.o)

hw18: $(OBJS) 
	$(GCC) $(TESTFLAGS) $(OBJS) -o hw18

.c.o: 
	$(GCC) $(TESTFLAGS) -c $*.c 


#test1 -> 5 2 inputs/test1.txt

#test2 -> 33 3 inputs/test2.txt

clean: # remove all machine generated files
	rm -f split *.o output* hw18
