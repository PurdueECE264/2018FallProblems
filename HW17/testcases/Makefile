# ***
# *** DO NOT modify this file
# ***

WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $(WARNING) $(ERROR)
VALGRIND = valgrind --tool=memcheck --leak-check=full --show-reachable=yes --verbose --error-exitcode=2 --log-file

TESTFLAGS = -DTEST_MAIN -DTEST_CREATEBST -DTEST_DIST -DTEST_PRINT

TARGET = hw17
SRCS = main.c bst.c 
OBJS = $(SRCS:%.c=%.o)

hw17: $(OBJS)
	$(GCC) $(TESTFLAGS) $(OBJS) -o hw17

.c.o:
	$(GCC) $(TESTFLAGS) -c $*.c

testall: test1 test2 test3 test4 

test1: clean
	echo "Testing Main Function"
	$(GCC) $(TESTFLAGS) $(SRCS) -o $(TARGET)
	timeout 10s ./hw17 inputs/test1.txt > output.txt
	diff -i -w output.txt expected/expected1.txt
	timeout 10s ./hw17 inputs/test5.txt > output.txt
	diff -i -w output.txt expected/expected5.txt
	timeout 10s ./hw17 inputs/test9.txt > output.txt
	diff -i -w output.txt expected/expected9.txt
	timeout 10s ./hw17 inputs/test13.txt > output.txt
	diff -i -w output.txt expected/expected13.txt
	timeout 10s ./hw17 inputs/test17.txt > output.txt
	diff -i -w output.txt expected/expected17.txt


test2: clean
	echo "Testing Create BST Function"
	$(GCC) $(TESTFLAGS) $(SRCS) -o $(TARGET)
	timeout 10s ./hw17 inputs/test2.txt > output.txt
	diff -i -w output.txt expected/expected2.txt
	timeout 10s ./hw17 inputs/test6.txt > output.txt
	diff -i -w output.txt expected/expected6.txt
	timeout 10s ./hw17 inputs/test10.txt > output.txt
	diff -i -w output.txt expected/expected10.txt
	timeout 10s ./hw17 inputs/test14.txt > output.txt
	diff -i -w output.txt expected/expected14.txt
	timeout 10s ./hw17 inputs/test18.txt > output.txt
	diff -i -w output.txt expected/expected18.txt

test3: clean
	echo "Testing Distance Function"
	$(GCC) $(TESTFLAGS) $(SRCS) -o $(TARGET)
	timeout 10s ./hw17 inputs/test3.txt > output.txt
	diff -i -w output.txt expected/expected3.txt
	timeout 10s ./hw17 inputs/test7.txt > output.txt
	diff -i -w output.txt expected/expected7.txt
	timeout 10s ./hw17 inputs/test11.txt > output.txt
	diff -i -w output.txt expected/expected11.txt
	timeout 10s ./hw17 inputs/test15.txt > output.txt
	diff -i -w output.txt expected/expected15.txt
	timeout 10s ./hw17 inputs/test19.txt > output.txt
	diff -i -w output.txt expected/expected19.txt

test4: clean
	echo "Testing Memory values"
	$(GCC) $(TESTFLAGS) $(SRCS) -o $(TARGET)
	timeout 10s $(VALGRIND)=memcheck.log ./hw17 inputs/test20.txt > /dev/null



clean: # remove all machine generated files
	rm -f hw17 *.o output*
