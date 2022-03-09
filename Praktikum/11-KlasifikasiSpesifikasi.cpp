// Classification of variables based on storage class specifications

#include <stdio.h>
#include <cstdio>

// Auto Variable
// As default, a variable is a auto variable
// auto int exampleVar; same as int exampleVar;
// Go out of scope once the program exits from the current block

// Register Variable
// Go out of scope once the program exits from the current block
// Usually used in “for iterator” for improve performance
void reg(){
    int sum = 0;
    for (register int i = 0; i < 100; i++) {
        sum += i;
    }
    printf("Sum = %d\n", sum);
}

// Extern Variable
// Specify that the variable is declared in a different file. 
// Compiler will not allocate memory for the variable
// Avoid duplicate declaration
// Share (global) variable for multiple.cpp files
void ext(){
    extern int z;
    printf("Persib Bandung %d", z);
}

// Constant Variable
// Variable's value is constant 
// To prevent the programmer from modifying
void con(){
    int const k_Hello = 0;
}

int main(){
    reg();
    ext();
    con();
}