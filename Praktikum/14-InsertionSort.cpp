#include <iostream> // Nama : Arif Saputra      NIM    : A11.2021.13480

using namespace std;

void insertionSort(){
    int A[] = {8, 7, 3, 2, 4};
    int n = 5;
    int temp=0, i, j;

    for(i = 1; i < n; i++){
        temp = A[i];
        j = i-1;
        while(j>=0 && temp<A[j]){
            A[j+1] = A[j];
            j = j-1;
        A[j+1] = temp;
        }
    }   
    for(i=0; i<n; i++){
        cout << A[i] << " ";
    }
}

int main(){
    insertionSort(); // Memanggil Fungsi void
}