Before you submit your solution, please go through the check list.

1. Have you modified any file that is not required for grading?  If
you modify any of them, your submitted program may not work.  The top
of every file should clearly mark whether you are allowed to modify
the file or not.  If a file is not marked, please contact the
instructor.

2. Do you write any code outside `#ifdef ... #endif`? The pairs of
`#ifdef` and `#endif` are used to provide partial credits when your
programs do not work completely.  If you write code outside any pair,
it is impossible giving partial credits.  

3. Do you include all files that are required for grading? Do you exclude
the files that should *not* be submitted?  

4. Do you delete all object files and rebuild the program?

5. Do you check whether you have compiled your program using the
  correct `gcc` flags?  If you do not use the correct `gcc` flags, you
  may lose many (possibly all) points. Most important, you must enable
  warnings.

6. Do you use Makefile to run through **all** test cases given to you?

7. Do you use `valgrind` to check memory errors?  If the program has
invalid memory access, it is very likely that your program gets zero.
Memory leak will cost you many (possibly all) points.

8. Do you submit to the correct homework?  If you submit incorrectly,
 you will get zero point.

Please understand that the grading program is very strict and you must
follow all rules.