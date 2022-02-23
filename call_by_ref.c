

//call by referance : Both the actual and formal parameters refer to same locations, so any changes made inside the function are actually reflected in actual parameters of caller.
// to call by reference, we use the concept of pointer.

// The pointer aholds that address once you say value = &a;. The variables *value and a are therefore equivalent.
// the & operator assigns the address => p = &c, which is defined as p points to c;
// The unary operator * is the indirection or dereferencing operator; *p = > *&c; (value at address of c)

#include<stdio.h>

void print_here(int *value);
void main(){
    int a = 6;

    print_here(&a);

    printf("value of a after print: %d\n", a);
}

void print_here(int *value){
    *value = *value + 2;
    printf("value of a: %d\n", *value);
}