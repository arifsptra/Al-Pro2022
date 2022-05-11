#include <iostream>

using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

void bubbleShort(int arr[], int n){
    int temp;
    bool swap = false;
    while(!swap){
        swap = true;
        for(int i=1; i<n; i++){
            if(arr[i-1]>arr[i]){
                swap = false;
                temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
            }
        }
    }
    printf("Data setelah diurutkan: \n");
    printArray(arr, n);
}

int binarySearch(int arr[], int size, int searchKey){
    int left = 0;
    int right = size-1;
    int middle = 0;
    while(left<=right){
        middle = (left+right) / 2;
        if(arr[middle]==searchKey){
            return middle;
        }else if(searchKey<arr[middle]){
            right = middle-1;
        }else {
            left = middle+1;
        }
    }
    return -1;
}

int main(){
    int arr[10] = {11, 21, 2, 4, 8, 30, 7, 8, 6, 10};
    int n = sizeof(arr)/sizeof(arr[0]); 

    printf("Data sebelum diurutkan: \n");
    printArray(arr, n); 

    bubbleShort(arr, n);
    
    int k;
    printf("Angka yang dicari: ");
    scanf("%d", &k);

    int hasil = binarySearch(arr, n, k);

    if(hasil>=0){
        printf("\nData ditemukan di index ke %d", hasil);
    }else {
        printf("Data tidak Ditemukan");
    }

    return 0;
}