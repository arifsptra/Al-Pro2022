#include <iostream>

using namespace std;

int foo(int n, int A[], int key){
    if(n<0){ //Basis 1
        return -1;
    } 
    if(A[n-1]==key){ //Basis 2
        return 1;
    } 
    //Rekuren
    return foo(n-1, A, key);
}

int main(){
    int Arr[5] = {12,3,12,3,4};
    cout << foo(5,Arr,10);

    return 0;
}