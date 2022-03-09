// Variable classification based on scope

#include <stdio.h>

// Global Variable
int globalVar;

// Static Variable
static int globalStaticVar;

void foo(){
    int localVar; // Local Variable
    printf("Foo         : %d %d\n", localVar, globalVar);
}

void foo2(){
    static int localStaticVar; // Local Static Variable
    printf("Foo Static  : %d\n", localStaticVar++);
}


int main(){
    int localVar = 1; // Local Variable
    printf("Main        : %d %d\n", localVar, globalVar);
    globalVar = 1;
    foo();

    printf("Main static : %d\n", globalStaticVar);
    foo2();
    foo2();

    return 0;
}
