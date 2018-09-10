# ***
# *** DO NOT modify this file
# ***

WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $(WARNING) $(ERROR)
VALGRIND = valgrind --tool=memcheck --verbose

TESTFALGS = -DTEST_MAIN -DTEST_COMP -DTEST_COUNT -DTEST_FILL

SRCS = main.c
OBJS = $(SRCS:%.c=%.o)

sort: $(OBJS)
	$(GCC) $(TESTFALGS) $(OBJS) -o sort

.c.o:
	$(GCC) $(TESTFALGS) -c $*.c

testmemory: $(TARGET)
	$(VALGRIND) ./sort

testall: test1 test2 test3

testadd: sort # sort here to ensure recompilation if necessary
	test1
	test2
	test3

test1: sort
	./sort inputs/test1 > output1
	diff output1 expected/expected1

test2: sort
	./sort inputs/test2 > output2
	diff output2 expected/expected2

test3: sort
	./sort inputs/test3 > output3
	diff output3 expected/expected3

clean: # remove all machine generated files
	rm -f sort *.o output?
