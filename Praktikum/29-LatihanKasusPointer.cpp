#include <iostream>

using namespace std;

int main(){
    int *iPtr;
    char *cPtr;
    float *fPtr; 

    int iNumber = 10;
    char cNumber = '1';
    float fNumber = 10.4;

    iPtr = &iNumber;
    cPtr = &cNumber;
    fPtr = &fNumber;

    cout << iPtr << endl;
    cout << cPtr << endl;
    cout << fPtr << endl;
    
    cout << iNumber << endl;
    cout << cNumber << endl;
    cout << fNumber << endl;

    return 0;
}