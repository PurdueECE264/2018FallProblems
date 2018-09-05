# Clustering Data

*Please read the entire file before you ask any question.*

This assignment asks you to cluster data into k groups using the
*k-mean* algorithm, here k is a number given to your program.
Clustering data is one of the most widely used methods in statistical
learning.  This is an example of *unsupervised learning*.

Here are some applications:

* A department store is planning the annual promotion. The store wants
to group customers and give them discounts based on their purchase
history.  The department store sells thousands of products and it is
not possible to manage so many different types of discounts. Instead,
the store wants to provide only 10 (k is 10 in this case) types of
discounts.

* A social media wants to recommend users to become friends.  The
media use the profiles, such as age, location, work, education,
marital status, to group the users.

This unsupervised learning because there is no "correct answer" in
advance. In contrast, *supervised learning* means the correct answer
is already known. An example of supervised learning is the [MNIST
Digit
Dataset](https://www.tensorflow.org/get_started/mnist/beginners).  In
this dataset, each image has a correct answer (also called *label*)
between 0 and 9.

Learning Goals
==============

You will learn to
* Understand the k-mean algorithm and implement it in C.
* Comment your code.
* Learn how to write a test generator for creating test cases.
* Inspect the details of a program's progress
* Develop a strategy for debugging.

k-mean Algorithm
----------------

Please read the handout with this assignment. Due to copyright, the handout is distributed in Blackboard. 

Page 388 of "An Introduction to Statistical Learning" by Gareth James • Daniela Witten • Trevor Hastie
Robert Tibshirani (published by Springer) explains the algorithm:

This assignment uses the *k-mean clustering* algorithm.  This
algorithm works in the following way:

1. Read the data and the given value k
2. For each data point, assignment a number between 0 and k-1. This is the initial clustering.
3. For each cluster (i.e., group), compute the the centroid as the center of all data points belonging to this group.
4. For each data point, find the closet centroid and assign this data point to that cluter
5. Repeat steps 3 and 4 until the convergence condition is met.

This algorithm has many different interpretations. First, it does not
specify how to calculate the distance between a data point and a
centroid.  The data is likely high-dimensional.  The most common
definition is the *Euclidean distance* but other definitions may be
adopted.  Also, the convergence condition can be (a) when no data
point changes to another group, (b) when steps 3-4 have executed a
fixed number of iterations (say 1,000), or (c) something else.

This assignment uses the Euclidean distance and convergence condition
(a).

P.S.: You can assume that all data points fall within [-1000000, 1000000] in
each dimension. 


Functions you need to complete
---------------------------------
In this assignment you have to complete only
three functions - `distance`, `closestCentroid` and `kmean`. But please see functions and structures in other files as well.

**Please also read the `hw04.c` file, it has comments on how to complete the functions.**

Also, note that all the centroids and datapoints in each dimension have the value of type `int`.

1. `distance` - this function calculates and returns the square of Euclidean distance between a centroid and a data point. Please see definition of [Euclidean distance](https://en.wikipedia.org/wiki/Euclidean_distance). It has two arguments as input `const Datapoint * datapoint` and `const Centroid * centroid`. The return value is of type `long long int`. Since, we are only concerend with the relative value of the distance, thus do not use `sqrt`. You should return square of the Euclidean distance.
  * `datapoint` - this is of type DataPoint pointer to one datapoint from which distance needs to be calculated. It is const because we don't want the function to change the value of datapoint.
  * `centroid` - This is of type Centroid pointer to the a particular centroid from which distance is being calculated.

2. `closestCentroid` - This function finds the index of the closest centroid of a given data point from an array of centroids. It uses the `distance` function. So please complete `distance` function first before working on this. The return value is of type int and value is the index of the closest centroid. It has following arguments 
  * `kval` - this is the number of clusters i.e. `K` in K-means.
  * `data` -  this is of type DataPoint * and it is the datapoint for which we are calculating the closest centroid.
  * `centroid` - it is of type Centroid * * and it is an array of centroids (each centroid is an array element)

3. `kmean` - This is the function which finds the `values` of k clusters in the given data set. It takes the following arguments
	* `kval` - this is the number of clusters i.e. `K` in K-means.
	* `nval` - this is number of data points 
	* `datapoints` - this is array of datapoints, it is of type `DataPoint * *`
	* `centroids` - this is array of centroids, it of type `Centroid * *`

Please note that all the clusters should have integer values in all dimensions.

Generating testcases
---------------------------------
When developing software, careful planning is the most critical factor
in creating high-quality code.  Testing is an important step but it is
practically impossible to test *every possible* scenario.  The problem
of testing is that for every *branch* (such as `if` condition or `switch`), it is
necessary to test all cases.  Studies show that typical programs have
a branch for every 10 lines of code. If a program has 1,000 lines
(this is a pretty small program), it has 100 branches and
2<sup>100</sup> possible cases.  This is far beyond the capability of
today's fastest computer can do in 100 years.  Thus, instead of
performing *exhaustive test* (i.e., test every possible case), it is
important to test strategically and create test cases carefully.

This assignment shows you *one way* (definitely not the only way) to
generate test cases.

This is an important part of your learning.
Generating many testcases to check everything is very important. 
The test generating files are shared with you.
To generate the test cases, you can think in the following way

```
	testgen program randomly assigns the center of each cluster within (-s, s) 
	for each dimension(in our case s=1000). The clusters values are distributed 
	within (-1000*m, 1000*m) where m = # of clusters. Then, the points of each 
	cluster are within (-span, span) of the center. If the points are truly 
	random, span is as large 4*s (allowing the clusters to overlap). If overlaping 
	is not allowed, span is only s/3 (integer). Please note that generated datapoints are integer
```


Things to note
---------------------------------
1. Please do not use `srand` function again, we have already used it. If you use it again you will get error.


Files with this assignment
---------------------------------

Following are the files that you will see with the code:
1. `hw04.c` - main file for this assignment, you only need to modify this file.
2. `hw04.h` - header file, which has definition for `kmean` and `closestCentroid` function. Please do not modify it.
3. `Makefile` - this is the make file for the assignment. It also has code to test your code for the provided testcases.
4. `datapoint.c / datapoint.h` - files containing DataPoint structure and functions associated with it
5. `common.c / common.h ` - files contain Common structure used by DataPoint and Centroid structures
5. `centroid.c / centroid.h` - files containing Centroid structure and various functions associate with centroid.
6. `test/test(x).txt` - these are some of the generated test cases for you. First line of test1.txt will have number of data points that are in the file. Second line will have dimension of the data point. From 3rd line the data points will start. Please do not modify this file.
7. `expected/expected(x).txt` - these are the expected output for the test cases given to you.
8. `testgenerator/main.py` - main file for generating the test case, please read the `Generating testcases` to see how the test generator works
9. `testgenerator/testgen.py` - helper function to main.py file, helps in creating test cases

To test your code. You have to first compile it and the run the following command.

```
./hw04 test/test1.txt 2 output1.txt
```
1. hw04 - This is binary that should get generated
2. test1.txt - this is the input file which contains data points for which K mean algorithm needs to run
3. 2 - this is the value of `K`, this is derived after running k-mean algo multiple times with different k values and then 
analyzing the optimum `k` by complex analysis of looking at error rate vs number of clusters and in some case silhouette scores. In this assignment you don't have to worry about finding the optimum `k` value. This will be provided to you. 
4. output1.txt - this is the name of the file in which output of your algorithm will be written. This will contain the centroids found by the algorithm. You can give any name to it.

We used the same test generator files that are shared with you to generate the test cases.
These test cases are of the name test/test(x).txt. To generate those test we used the following commands:

```
		python main.py -o test/test1.txt --overlap False -num 100 -cluster 2 -d 2
		python main.py -o test/test2.txt --overlap False -num 50 -cluster 3 -d 3
		python main.py -o test/test3.txt --overlap False -num 200 -cluster 4 -d 2
		python main.py -o test/test4.txt --overlap False -num 1000 -cluster 5 -d 5
		python main.py -o test/test5.txt --overlap False -num 500 -cluster 10 -d 4
 		python main.py -o test/test7.txt --overlap False --num 10 --cluster 2 -d 2
		python main.py -o test/test7.txt --overlap False --num 30 --cluster 2 -d 3
		python main.py -o test/test8.txt --overlap False --num 10 --cluster 2 -d 2

```

Submitting Your code
--------
**This is a programming assignment, so you would have to submit the code on Blackboard**

You have to submit the following file in a zip folder on the blackboard:
* hw04.c - this file should have with `distance`, `kmean` and `closestCentroid` function completed.
To zip the file use the following commands:
```
zip hw04.zip hw04.c
```
upload the `hw04.zip' folder to Blackboard.

The **only** way to submit homework is through Blackboard.
