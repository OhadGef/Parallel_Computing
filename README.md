Hello, This is a small attempt to parallelize matrix multiplication in Java and C.
First, what was done was naive implementation of multiplication of matrices which is named BruteForce.java
followed by Divide and Conquer Approach in a File named DivCon.java
Followed By strassen's implementation which is in a file named Strassen.java

Now for the parallel implementation of the files.
A file named DivConThread.java which has Divide and Conquer approach using Java pthreads.
Next, a file named StrassenThread.java which has Strassen's algo done in parallel.

All the files can be compiled by just using javac <filename>.java and then run using java <filenmame>
Once ran, every file expects the user to input the array size. Make sure the array size is given in powers of 2.
(2,4,8,16,32,64,12,256,512,1024.....)
The output will be the time taken to execute the program.
the result of computtation is commented out which can be uncommented to get results.

Similiarly, C code has also been included.
Naive implementation : iterative.c
Divide and Conquer Approach : recursive.c
Strassen's algorithm : strassen.c

all files can be compiled by just using gcc <filename>.c
and ./a.out the execute. 
Give as input the size of matrix in powers of 2 as mentioned above.
The output will be the time taken to execute the program.
the result of computtation is commented out which can be uncommented to get results.

For parallel implementation:
Divide and Conquer : precursive.c
Strassen's approach : pstrassen.c

The above 2 files and be compiled using gcc <filename>.c -lpthread

The rest is all similiar to the previous input.
The output will be the time taken to execute the program.
the result of computtation is commented out which can be uncommented to get results.
