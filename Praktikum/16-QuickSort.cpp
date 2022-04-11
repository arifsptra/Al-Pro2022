#include <iostream>
using namespace std;

// to display an array after sort
void show(int a[], int n){
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}

// sorting function
int partition(int a[], int low, int high){
    int pivot = a[high];
    int i = (low - 1); 

    for (int j = low; j < high; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;
    return (i + 1);
}

// recursive function
void quickSort(int a[], int low, int high){
    if (low < high)
    {
        int p = partition(a, low, high);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}


int main(){
    int a[] = {4, 7, 2, 1, 9, 6};
    int n = sizeof(a)/sizeof(a[0]);

    quickSort(a, 0, n);
    
    show(a, n);

    return 0;
}