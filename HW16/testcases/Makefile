WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $(WARNING) $(ERROR)

TESTFLAGS = -DTEST_MAIN -DTEST_FREETREE -DTEST_SEARCH -DTEST_SUBTREE -DTEST_CONTAINED -DPRINT_FUN
VALGRIND = valgrind --tool=memcheck --leak-check=full --show-reachable=yes --verbose --error-exitcode=2 --log-file
SRCS = main.c hw16.c binarytree.c
OBJS = $(SRCS:%.c=%.o)
TARGET = hw16
$TARGET: $(OBJS)
	$(GCC) $(TESTFLAGS) $(OBJS) -o hw16

.c.o:
	$(GCC) $(TESTFLAGS) -c $*.c

testall: test1 test2 test3 test4 test5

test1: clean
	echo "Testing Main Function"
	$(GCC) $(TESTFLAGS) $(SRCS) -o $(TARGET)
	timeout 10s ./$(TARGET) inputs/tree1/test1.txt inputs/tree2/test1.txt > output.txt
	diff -i -w output.txt expected/expected1.txt
	timeout 10s ./$(TARGET) inputs/tree1/test2.txt inputs/tree2/test2.txt > output.txt
	diff -i -w output.txt expected/expected2.txt


test2: clean
	echo "Testing Search Function"
	$(GCC) $(TESTFLAGS) $(SRCS) -o $(TARGET)
	timeout 10s ./$(TARGET) inputs/tree1/test3.txt inputs/tree2/test3.txt > output.txt
	diff -i -w output.txt expected/expected3.txt
	timeout 10s ./$(TARGET) inputs/tree1/test4.txt inputs/tree2/test4.txt > output.txt
	diff -i -w output.txt expected/expected4.txt

test3: clean
	echo "Testing SubTree Function"
	$(GCC) $(TESTFLAGS) $(SRCS) -o $(TARGET)
	timeout 10s ./$(TARGET) inputs/tree1/test5.txt inputs/tree2/test5.txt > output.txt
	diff -i -w output.txt expected/expected5.txt
	timeout 10s ./$(TARGET) inputs/tree1/test6.txt inputs/tree2/test6.txt > output.txt
	diff -i -w output.txt expected/expected6.txt

test4: clean
	echo "Testing Contained Function"
	$(GCC) $(TESTFLAGS) $(SRCS) -o $(TARGET)
	timeout 10s ./$(TARGET) inputs/tree1/test7.txt inputs/tree2/test7.txt > output.txt
	diff -i -w output.txt expected/expected7.txt
	timeout 10s ./$(TARGET) inputs/tree1/test8.txt inputs/tree2/test8.txt > output.txt
	diff -i -w output.txt expected/expected8.txt

test5: clean
	echo "Testing FreeTree Function"
	$(GCC) $(TESTFLAGS) $(SRCS) -o $(TARGET)
	timeout 10s $(VALGRIND)=memcheck.log ./$(TARGET) inputs/tree1/test4.txt inputs/tree2/test4.txt > output.txt

clean: # remove all machine generated files
	rm -f hw16 *.o output*
