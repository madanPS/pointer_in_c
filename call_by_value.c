//The call by value method of passing arguments to a function copies the actual value of an argument into the formal parameter of the function. 
//In this case, changes made to the parameter inside the function have no effect on the argument.

// arguments => passed to the function, sum(a,b) => here a and b are called arguments passed to the function sum
// parameter => sum(pa,pb){...pa, pb} => here pa and pb are called the parameters inside the function sum that were passed from above

#include<stdio.h>

void print_here(int value);

void main(){
    int a = 6;

    print_here(a);

    printf("value of a after print: %d\n", a);
}

void print_here(int value){
    value = value + 2;
    printf("value of a: %d\n", value);
}