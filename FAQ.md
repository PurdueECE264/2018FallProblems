# FAQ (Frequently Asked Questions) for Purdue ECE 264 "Advanced C Programming"

* Why do we learn C? Is anyone still using C?

IEEE reports the top programming languages every year.  Among the top
   five languages, four are "C-based": C, Java, C++, and C#.  When you
   build a new computer system, C is often the first (sometimes the
   only) programming language to support.

* Why is C so popular?

C provides a good abstraction of the underlying system. It is not too
low level (like assembly) and not too high level (like Python). C
gives programmers good control about the programs' behavior.  It is
often agreed that it is easier to learn other programming languages
after knowing C, but not the other way.

* Is C easy to learn?

Different people would give different answers. Some people think C is
easy because programmers have better control of programs' behavior and
there is no mystery. Some people dislike C's design philosophy:
programmers are responsible for the details.

* Is this class hard?

This also depends.  Some people think it is easy. Some people think it
is hard.  Most people would agree that you need to be very careful. A
"small" mistake (small to humans) may make a program completely useless.
You need to understand many common mistakes and avoid them.

* What is the most difficult part of this class?

You must *throw away your old habit*.  When you write small programs,
you can start coding right away and debug your programs easily.  In
this class, that **will not work**. You absolutely must think and plan
before coding.  You must carefully consider problems that may occur
and take actions preventing these problems. You must systematically
test your programs so that problems are detected early.  Do not
imagine that you would be the first exception and can still write code
without planning, using your old habit.  You would fail.

* Why are computers so strict (or stupid)?

Computers are "designed to be stupid". Computers were created during
the second world war and the cold war for controlling nuclear
weapons. Computers were designed to do precisely what they were told
to do.  Computers were not allowed to "think" because a computer that
can think may do something surprising (such as destroy the earth).

* Who is this class designed for?

This class is designed for the people that consider to pursue software
creation as their careers.  This class is designed for professionals,
not tourists.

* How can students do well in this class?

First, go to lectures. The instructors have seen many common mistakes
and warn you about these mistakes.  Second, ask questions in lectures.
Third, make friends in the class. Research has shown that students
learning together understand the materials much better. Of course, DO
NOT COPY CODE.  Throw away your old habit of writing programs quickly
and then debugging. You need a completely new strategy: you need to
understand, think, and plan, before writing code.  

* What are the important principles for writing good programs?

Understand the rule: **The sooner you start coding, the later you will
finish.** You need to carefully think about possible problems before
writing code.

Before you write code, think clearly how your programs would work. If
you cannot understand the flow of a program in your head, your program
will definitely not work on a computer.  What are the components?  How
do they exchange data?  Write down comments before you write code. If
your comments clearly describe the flow of a program, then you can
fill in code to do what the comments say.  Write code that is simply
to read. Avoid complex statements. Avoid `if` statements with very
long and complex conditions.  If you have a complex condition, break
it down into smaller parts.  Keep each function simple so you can
ensure that it is correct before you write another function.  Write
**DRY** (Don't Repeat Yourself) code: if you find that you need to
copy-paste code, *refactor* it into a function.  Whenever you
copy-paste code, you run the risk of losing consistency of the similar
code. Keep each function simple and short; keep each function within
60 lines of code.

You must not write the programs and then test. You must write small
pieces, test them, before writing more.

* How do I know my programs work or not?

The grading programs and some test cases are given to you.

* Do I need to create additional test cases?

Absolutely yes, if you want to get A.

* Do I submit the test cases or the code for testing?

You do not. You submit the source code of your working programs.

* If I do not submit the test cases or the testing code, why should I
  create them?

You need them to ensure that your submitted programs are correct.

* Do I get any point for the test cases or the testing code?

You do not.

* I do not understand. If I do not get any point, why should I
  create them?

How many points do you get by eating breakfast, lunch, or dinner? How
many points do you get by sleeping? Do you stop eating or sleeping
since you receive no point doing these things?

* How can it be possible that my programs are wrong even after passing
  all test cases?

It is possible that these test cases do not trigger the errors.  It is
very difficult designing test cases that cover all possible scenarios.

* How much time does each programming assignment take?

It varies.  Each programming assignment is design to take no more than
8 hours *if you understand the concept*.  You must fully understand
the concepts before writing code.

* I spend a lot of time. Why is my score so low?

It does not matter how much time you spend. What matters is whether
your programs work or not.

* What happens if I miss the submission deadline.

You will receive late penalty immediately.

* I have not changed the files on my computer. Can you use these files
for grading?

Your scores depend only on what is submitted.  It is strictly
forbidden to look at files on your computer (or your Purdue account)
for grading.  

* It seems that I must be extremely careful about every detail.

Of course. Why does that surprise you? 