// The pointer a holds that address once you say p = &x;. The variables *p and x are therefore equivalent.

#include<stdio.h>
int main(){
    int x;
    x = 5;

    int *p; /* a pointer to an integer */
    p = &x;

    printf("%d\n", *p);
    printf("%p\n", p);

}