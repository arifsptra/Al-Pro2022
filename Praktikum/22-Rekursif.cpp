#include <iostream> // Arif Saputra - A11.2021.13480

using namespace std;

int mult(int a, int b){
    if(a==0 || b==0){
        return 0;
    }else if(b==1){
        return a;
    }else if(b>0){
        return a+mult(a,b-1);
    }else {
        return (-a)+mult(a,b+1);
    }
}
int main(){
    cout << mult(9, 3) << endl;
    cout << mult(0, 2) << endl;
    cout << mult(4, 0) << endl;
    cout << mult(0, 0) << endl;
    cout << mult(5, -3) << endl;
    cout << mult(-7, 2) << endl;
    cout << mult(-4, -2) << endl;
    return 0;
}