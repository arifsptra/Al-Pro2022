// Mencari Bilangan Prima
#include <iostream>

using namespace std;

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
    int n = 11;
    if (fun(n)){
        printf("merupakan bilangan fun");
    }else{
        printf("bukan merupakan bilangan fun");
    }

    return 0;
}