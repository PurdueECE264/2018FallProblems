# ***
# *** DO NOT modify this file 
# ***

WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $(WARNING) $(ERROR) 

TESTFALGS = -DTEST_SWAP -DTEST_SORT

SRCS = main.c sort.c
OBJS = $(SRCS:%.c=%.o)

sort: $(OBJS) 
	$(GCC) $(TESTFALGS) $(OBJS) -o sort

.c.o: 
	$(GCC) $(TESTFALGS) -c $*.c 

testall: test1 test2 test3

testadd: sort # sort here to ensure recompilation if necessary
	test1
	test2
	test3

test1: sort
	./sort test1 > output1
	diff output1 expected1

test2: sort
	./sort test2 > output2
	diff output2 expected2

test3: sort
	./sort test3 > output3
	diff output3 expected3

clean: # remove all machine generated files
	rm -f sort *.o output?


