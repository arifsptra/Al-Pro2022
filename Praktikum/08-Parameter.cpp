// Kinds of parameters
// Formal Parameters are variables that are in the parameter list in the function definition
/*int example(int a, int b){ // => Formal parameters
    return (a+b);
}*/

// Actual parameters are variables (parameters) used in function calls
/*int example(){
    a = example(b, c); // => Actual parameters
}*/

// Default Perameter
#include <cstdio>

void foo(int a, int b=1, int c=2);

void foo(int a, int b, int c){
    printf("%d, %d, %d\n", a, b, c);
}

int main(){
    foo(10);
    foo(10, 10);
    foo(10, 10, 10);
}