#include <iostream>  // Nama : Arif Saputra      NIM: A11.2021.13480

using namespace std;

int *selectionSort(int n, int a[]){
    int i=0;
    int temp;
    while(i!=n){
        for(int j=i; j<n; j++){
            if(a[i]>a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
        i++;
    }
    return a;
}
int main(){
    int a[] = {93, 40, 49, 50, 30, 11, 10};
    int i;
    int n = sizeof(a)/sizeof(a[0]);
    int *x;
    x = selectionSort(n, a);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}