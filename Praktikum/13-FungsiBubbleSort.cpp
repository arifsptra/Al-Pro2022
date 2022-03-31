#include <iostream>

using namespace std;

// Menggunakan Fungsi void
// void bubbleSort(){
//     int a [] = {93, 11, 10, 18, 30, 19};
//     int n = sizeof(a)/sizeof(a[0]);
//     int temp;

//     bool swap = false;
//     while(!swap){
//         swap = true;
//         for(int i=1; i<n; i++){
//             if(a[i-1]>a[i]){
//                 swap = false;
//                 temp = a[i];
//                 a[i] = a[i-1];
//                 a[i-1] = temp;
//             }
//         }
//     }
//     for(int i=0; i<n; i++){
//         cout << a[i] << " ";
//     }
// }

int *bubbleSort(int n, int a[]){
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
    return a;
}

int main(){
    // bubbleSort(); // Memanggil Fungsi void
    int a[] = {93, 11, 10, 18, 30, 19};
    int n = sizeof(a)/sizeof(a[0]);

    int *x; 
    x = bubbleSort(n, a);

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}