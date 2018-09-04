# ***
# *** DO NOT modify this file
# ***

WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $(WARNING) $(ERROR)

TESTFALGS = -DTEST_JOSEPHUS

SRCS = main.c josephus.c
OBJS = $(SRCS:%.c=%.o)

main: $(OBJS)
	$(GCC) $(TESTFALGS) $(OBJS) -o main

.c.o:
	$(GCC) $(TESTFALGS) -c $*.c

testall: test1 test2 test3 test4 test5 test6 test7 test8 test9 test10

test1 : main
	timeout 5s ./main 9522 92 > output/output1.txt
	diff -i -w expected/expected1.txt  output/output1.txt
test2 : main
	timeout 5s ./main 3537 91 > output/output2.txt
	diff -i -w expected/expected2.txt  output/output2.txt
test3 : main
	timeout 5s ./main 274 74 > output/output3.txt
	diff -i -w expected/expected3.txt  output/output3.txt
test4 : main
	timeout 5s ./main 5622 63 > output/output4.txt
	diff -i -w expected/expected4.txt  output/output4.txt
test5 : main
	timeout 5s ./main 5442 52 > output/output5.txt
	diff -i -w expected/expected5.txt  output/output5.txt
test6 : main
	timeout 5s ./main 3774 23 > output/output6.txt
	diff -i -w expected/expected6.txt  output/output6.txt
test7 : main
	timeout 5s ./main 2387 76 > output/output7.txt
	diff -i -w expected/expected7.txt  output/output7.txt
test8 : main
	timeout 5s ./main 4801 94 > output/output8.txt
	diff -i -w expected/expected8.txt  output/output8.txt
test9 : main
	timeout 5s ./main 9955 42 > output/output9.txt
	diff -i -w expected/expected9.txt  output/output9.txt
test10 : main
	timeout 5s ./main 8180 11 > output/output10.txt
	diff -i -w expected/expected10.txt  output/output10.txt

clean: # remove all machine generated files
	rm -f main *.o output/output*
