#include <iostream>
// Arif Saputra - A11.2021.13480
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

int fun(int n, int i=2){
    // Basis
    if (n <= 2){
        if(n == 2){
            return true;
        }else{
            return false;
        } 
    }
    if (n%i == 0){
        return false;
    }
    if (i*i > n){
        return true;
    }
    //Rekuren
    return fun(n, i + 1);
}

int main(){
    int Arr[5] = {12,3,12,3,4};
    cout << "Jawaban No 1: Mencari Nilai pada Array" << endl;
    cout << foo(5,Arr,12) << endl;

    int n = 11;
    cout << "Jawaban No 2: Mencari Bilangan Prima" << endl;
    if (fun(n)){
        cout << "merupakan bilangan fun";
    }else{
        cout << "bukan merupakan bilangan fun";
    }

    return 0;
}