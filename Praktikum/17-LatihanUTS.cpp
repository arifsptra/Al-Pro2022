#include <iostream>

using namespace std;

void insertionSort(int n, int b[]){
    int temp=0, i, j;

    for(i = 1; i < n; i++){
        temp = b[i];
        j = i-1;
        while(j>=0 && temp<b[j]){
            b[j+1] = b[j];
            j = j-1;
        b[j+1] = temp;
        }
    }   
    for(i=0; i<n; i++){
        cout << b[i] << " ";
    }
}

int *selectionSort(int n, int c[]){
    int i, temp;
    while(i!=n){
        for(int j=i; j<n; j++){
            if(c[i]<c[j]){
                temp = c[j];
                c[j] = c[i];
                c[i] = temp;
            }
        }
        i++;
    }
    for(i=0; i<n; i++){
        cout << c[i] << " ";
    }
    return c;
}

int main(){
    int a[] = {8, 6, 9, 5, 3, 1, 7, 10, 2, 4};
    int b[5];
    int c[5];
    int r=0, s=0;
    for(int i=0; i<10; i++){
        if(a[i]%2==0){
            b[r] = a[i];
            r++;
        }else {
            c[s] = a[i];
            s++;
        }
    }
    int n = 5;

    cout << "Insertion Sort: ";
    insertionSort(n, b);
    
    int *x;
    cout << "\nDescending SelectionSort: ";
    x = selectionSort(n, c);

    return 0;
}