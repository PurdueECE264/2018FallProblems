CFLAGS = -std=c99 -g -Wall -Wshadow --pedantic -Wvla -Werror
GCOV= -fprofile-arcs -ftest-coverage
TEST_FLAGS = -DLINKEDLIST -DTEST_MAIN -DTEST_CREATENODE -DTEST_LINKEDLISTCREATE -DTEST_JOSEPHUS
VALGRIND = valgrind --tool=memcheck --leak-check=full --show-reachable=yes --verbose --error-exitcode=2 --log-file
GCC = gcc $(CFLAGS) #$(GCOV)
TARGET = hw12
SRCS = hw12.c main.c
OBJS = $(SRCS:%.c=%.o)


all: $(TARGET)

hw12: $(OBJS)
	$(GCC) $(TEST_FLAGS) $(OBJS) -o $(TARGET)

.c.o:
	$(GCC) $(TEST_FLAGS) -c $*.c

testall: test1 test2 test3 test4 test5

test1: clean
	echo "Testing CreateNode Function"
	$(GCC) $(TEST_FLAGS) $(SRCS) -o $(TARGET)
	timeout 10s ./$(TARGET) 23 3 1 > output1.txt
	diff -i -w output1.txt expected/expected1.txt
	timeout 10s ./$(TARGET) 34 5 4 > output2.txt
	diff -i -w output2.txt expected/expected2.txt

test2: clean
	echo "Testing main Function"
	$(GCC) $(TEST_FLAGS) $(SRCS) -o $(TARGET)
	timeout 10s ./$(TARGET) 35 14 2 > output3.txt
	diff -i -w output3.txt expected/expected3.txt
	timeout 10s ./$(TARGET) 40 5 5 > output4.txt
	diff -i -w output4.txt expected/expected4.txt

test3: clean
	echo "Testing LinkedListCreate Function"
	$(GCC) $(TEST_FLAGS) $(SRCS) -o $(TARGET)
	timeout 10s ./$(TARGET) 38 15 3 > output5.txt
	diff -i -w output5.txt expected/expected5.txt
	timeout 10s ./$(TARGET) 140 35 19 > output6.txt
	diff -i -w output6.txt expected/expected6.txt

test4: clean
	echo "Testing Josephus Function"
	$(GCC) $(TEST_FLAGS) $(SRCS) -o $(TARGET)
	timeout 10s ./$(TARGET) 80 19 7 > output7.txt
	diff -i -w output7.txt expected/expected7.txt
	timeout 10s ./$(TARGET) 100 13 8 > output8.txt
	diff -i -w output8.txt expected/expected8.txt
	timeout 10s ./$(TARGET) 1700 23 15 > output9.txt
	diff -i -w output9.txt expected/expected9.txt

test5:
	echo "Testing Free Function"
	$(GCC) $(TEST_FLAGS) $(SRCS) -o $(TARGET)
	timeout 10s $(VALGRIND)=memcheck.log ./$(TARGET) 100 13 8 > /dev/null


clean:
	/bin/rm -f *.txt
	/bin/rm -f *.o
	/bin/rm -f *.gcda *.gcno gmon.out *gcov
	/bin/rm -f hw12
