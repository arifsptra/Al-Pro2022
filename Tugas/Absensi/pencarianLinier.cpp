#include <cstdio> 
// Nama : Arif Saputra      NIM : A11.2021.13480
void linierSearch(int arr[], int n, int k){
    int i;
    int j = 0;
    int indexArr[10] = {};
    for(i=0; i < n; i++){
        if(arr[i] == k){
            indexArr[j] = i;
            j++;
        }
    }
    printf("Hasil: %d Ditemukan pada index ", k);
    for(i=0; i<j; i++){
        printf("%d ", indexArr[i]);
    }
}
int main(){
    int arr[7] = {1, 5, 2, 4, 5, 7, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    int k;
    printf("Yang Dicari: ");
    scanf("%d", &k);
    linierSearch(arr, n, k);
    return 0;
}