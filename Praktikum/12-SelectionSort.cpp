#include <iostream>

using namespace std;

int main(){
    int a[] = {93, 40, 49, 50, 30, 11, 10};
    int n = sizeof(a)/sizeof(a[0]);
    int i = 0;
    int temp;

    while(i!=n){
        for(int j=i; j<n; j++){
            if(a[i]>a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
        i++;
    }
    for(i=0; i<n; i++){
        cout << a[i] << " ";
    }
}