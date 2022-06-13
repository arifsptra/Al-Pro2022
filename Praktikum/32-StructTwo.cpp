#include <iostream>

using namespace std;

typedef struct test_t{
    int var1;
    char var2;
    char var3[12];
    void sayHello(); // Struct Fungsi
    test_t(); // Constructor
    ~test_t(); // Destructor
}MyStruct;

// Struct Fungsi
void MyStruct::sayHello(){
    printf("Hello World\n");
}

// Constructor
test_t::test_t(){
    printf("Created!\n");
}

// Destructor
test_t::~test_t(){
    printf("Destroyed!\n");
}

int main(){
    MyStruct myStruct;
    myStruct.sayHello();
    printf("Arif\n");

    return 0;
}