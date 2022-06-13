// Struct and Static Number

#include <iostream>

using namespace std;

typedef struct test_t{
    int val1;
    static char val2;
    static void sayHello(){printf("\nHello");}
}MyStruct;

// void MyStruct::sayHello(){ 
//     printf("Tes");
// }

int main(){
    MyStruct myStruct;
    printf("%d", sizeof(myStruct));
    MyStruct::sayHello();

    return 0;
}