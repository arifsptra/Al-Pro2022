#include <iostream>

using namespace std;

int main(){
    char a[3] = {1, 2, 3};

    char *p = new char[3];

    p[0] = 10; p[1] = 20; p[2] = 30;

    printf ("&p+2= 0x%x \n", p);

    return 0;
}