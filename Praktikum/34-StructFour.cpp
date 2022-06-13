// Struct and Access Privilege

#include <iostream>

using namespace std;

struct myStruct {
    int w; // No Modified

    public:
    int x; // can be accessed anywhere

    private:
    int y; // available in struct
    
    protected:
    int z; // available in struct and struct acceptance (OOP)
};

int main(){
    myStruct sap;
    sap.w = 10;
    sap.x = 10;
    // sap.y = 10; // will error
    // sap.z = 10; // will error

    return 0;
}