#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int searchKey){
    int left = 0;
    int right = size-1;
    int middle = 0;
    while(left<=right){
        middle = (left+right) / 2;
        if(arr[middle]==searchKey){
            return middle;
        }else if(searchKey<arr[middle]){
            right = middle - 1;
        }else {
            left = middle + 1;
        }
    }
    return -1;
}

int main(){
    int l[10] = {2,3,4,5,6,10,11,12,12,20};
    printf("/n");
    int hasil = binarySearch(l, 10, 10);
    if(hasil>=0){
        printf("Ditemukan di index ke %d", hasil);
    }else {
        printf("Data tidak ditemukan");
    }
    return 0;
}