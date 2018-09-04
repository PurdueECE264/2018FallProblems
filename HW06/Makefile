# ***
# *** Please modify this file as required
# ***

WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $(WARNING) $(ERROR) 

TESTFALGS = -DTEST_MAIN -DTEST_COMP -DTEST_FILL -DTEST_WRITE -DTEST_COUNT

SRCS = main.c vector.c
OBJS = $(SRCS:%.c=%.o)

hw06: $(OBJS) 
	$(GCC) $(TESTFALGS) $(OBJS) -o hw06

.c.o: 
	$(GCC) $(TESTFALGS) -c $*.c 

test1: hw06
	./hw06 inputs/test1.bin output1.bin
	#run diff between output1.bin and expected/expected1.bin

test2: hw06
	./hw06 inputs/test2.bin output2.bin
	#run diff between output2.bin and expected/expected2.bin

test3: hw06
	./hw06 inputs/test3.bin output3.bin
	#run diff between output3.bin and expected/expected3.bin

clean: # remove all machine generated files
