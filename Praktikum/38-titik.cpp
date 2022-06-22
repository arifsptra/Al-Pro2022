#include <iostream>
#include "titik.h"

using namespace std;

//definisi
int main(){
    T_Titik t;
    T_Titik x;
    x=t.isiTitik(10,20);
    t.cetakTitik(x);
    T_Titik *p= new T_Titik[10];
    p=t.isiArrayTitik(p);
    t.cetakArrayTitik(p);
    return 0;
}
