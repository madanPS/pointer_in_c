// A pointer is a variable that points to another variable. This means that a pointer holds the memory address of another variable. 

#include<stdio.h>

int main(){
    int x;
    x = 5;

    printf("%d\n", x);          // it prints the value of x
    printf("%p\n", &x);         // it prints the memory address where x is located

}