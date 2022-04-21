#include <iostream>

using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(int arr[], int size)
{
    int i;
    cout << "[" ;
    for (i = 0; i < size-1; i++)
        cout << arr[i] << ", ";
    cout << arr[size-1] << "]";
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    int i = 0, j;
    bool urut;
    do{
      urut = true;
      for (j = 0; j < n-i-1; j++){
          if (arr[j] > arr[j+1]){
              swap(&arr[j], &arr[j+1]);
              urut = false;
          }
      }
      i++;
    }while(urut == false);
}


int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Sebelum diurutkan: ";
    printArray(arr, n);
 
    bubbleSort(arr, n);
    cout<<"Setelah diurutkan: ";
    printArray(arr, n);
    return 0;
}