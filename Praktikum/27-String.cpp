#include <iostream>
#include <string.h>

using namespace std;

char* GetString1(){
    char *st = "String!";
    return st;
}

char* GetString2(){
    char st[] = "String!";
    char *pst = st;
    return pst;
}

char* GetString3(){
    char *st = new char[6];
    strcpy(st, "String!");
    return st;
}

int main(){
    cout << GetString1() << endl;
    cout << GetString2() << endl;
    cout << GetString3() << endl;

    return 0;
}