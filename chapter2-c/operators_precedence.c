/*
when dealing with multiple operators at the same time,compiler processes the operator with
the highest priority and the rest comes after.

* / % → highest

+ - → middle

= → lowest(assignment operator have the lowest priority.)

If operators have the same precedence → 
they are evaluated left to right (this is called associativity).



in C programming,bodmas rule doesnt apply.

Your Table (Refined)
Priority	Operators	             Associativity
1st	       ! (logical NOT)	      Right → Left
2nd	       *, /, %	             Left → Right
3rd	       +, -	                  Left → Right
4th	       <, >, <=, >=	          Left → Right
5th	       ==, !=	             Left → Right
6th	       &&	                 Left → Right
7th	       `	
8th	       = (assignment)	     Right → Left




*/ 

#include<stdio.h>

int main(){

    printf("%d\n",20/5+3); //here at first division happens and then addition
    printf("%d\n",20*5/10%4); // at first multiply,then divide and then %
    printf("%d\n",30+5-6);



    return 0;
}