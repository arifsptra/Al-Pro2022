#include <iostream>

using namespace std;

void show(int a[], int n){
    for(int i=0; i<n; i++){
        for(int g=1; g<a[i]; g++){
            cout << "|";
        }
        cout << "\t" << a[i] << endl;
    }
}

int *selectionSort(int n, int a[]){
    int i, temp;
    while(i!=n){
        for(int j=i; j<n; j++){
            if(a[i]<a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
        i++;
    }
    show(a, n);
    return a;
}

int main(){
    int a[] = {8, 6, 9, 5, 3};
    int n = sizeof(a)/sizeof(a[0]);

    show(a, n);

    int *x;
    cout << "\n";
    x = selectionSort(n, a);

    return 0;
}