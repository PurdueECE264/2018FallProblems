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

testall: test1 test2 test3 test4 test5 test6 test7 test8 test9 test10

test1: hw04
		./hw04 test/test1.txt 2 output1.txt
	 	diff output1.txt expected/expected1.txt

test2: hw04
		./hw04 test/test2.txt 2 output2.txt
		diff output2.txt expected/expected2.txt

test3: hw04
		./hw04 test/test3.txt 3 output3.txt
		diff output3.txt expected/expected3.txt
test4: hw04
		./hw04 test/test4.txt 4 output4.txt
		diff output4.txt expected/expected4.txt

test5: hw04
		./hw04 test/test5.txt 2 output5.txt
		diff output5.txt expected/expected5.txt

test6: hw04
		./hw04 test/test6.txt 3 output6.txt
	 	diff output6.txt expected/expected6.txt

test7: hw04
		./hw04 test/test7.txt 2 output7.txt
		diff output7.txt expected/expected7.txt

test8: hw04
		./hw04 test/test8.txt 2 output8.txt
		diff output8.txt expected/expected8.txt
test9: hw04
		./hw04 test/test9.txt 3 output9.txt
		diff output9.txt expected/expected9.txt

test10: hw04
		./hw04 test/test10.txt 3 output10.txt
		diff output10.txt expected/expected10.txt

clean: # remove all machine generated files
	rm -f hw04 *.o output?
