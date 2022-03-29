// Nama : Arif Saputra
// NIM : A11.2021.13480

#include <iostream>

using namespace std;

int main(){
    int a [] = {93, 11, 10, 18, 30, 19};
    int n = sizeof(a)/sizeof(a[0]);
    int temp;

    bool swap = false;
    while(!swap){
        swap = true;
        for(int i=1; i<n; i++){
            if(a[i-1]>a[i]){
                swap = false;
                temp = a[i];
                a[i] = a[i-1];
                a[i-1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}