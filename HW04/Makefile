# ***
# *** DO NOT modify this file
# ***

WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $(WARNING) $(ERROR)

TESTFALGS = -DTEST_CLOSESTCENTROID -DTEST_DIST -DTEST_KMEAN

SRCS = datapoint.c centroid.c hw04.c
OBJS = $(SRCS:%.c=%.o)

hw04: $(OBJS)
	$(GCC) $(TESTFALGS) $(OBJS) -o hw04

.c.o:
	$(GCC) $(TESTFALGS) -c $*.c

testall: test1 test2 test3 test4 test5

testadd: hw04 # hw04 here to ensure recompilation if necessary
	test1
	test2
	test3
	test4
	test5


test1: hw04
	./hw04 test/test1.txt 2 output/output1.txt
	 	diff -i -w output/output1.txt expected/expected1.txt

test2: hw04
	./hw04 test/test2.txt 3 output/output2.txt
	diff -i -w output/output2.txt expected/expected2.txt

test3: hw04
	./hw04 test/test3.txt 4 output/output3.txt
	diff -i -w output/output3.txt expected/expected3.txt
test4: hw04
	./hw04 test/test4.txt 4 output/output4.txt
	diff -i -w output/output4.txt expected/expected4.txt

test5: hw04
	./hw04 test/test5.txt 10 output/output5.txt
	diff -i -w output/output5.txt expected/expected5.txt

clean: # remove all machine generated files
	rm -f hw04 *.o
