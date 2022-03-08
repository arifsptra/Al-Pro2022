#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
    int a;
    cout << "Masukkan nilai akar: ";
    cin >> a;

    // sqrt(nilai) => Calculate the root of a number
    cout << "Akar dari " << a << " adalah " << sqrt(a) << endl;

    int x, y;
    cout << "Masukkan nilai: ";
    cin >> x;
    cout << "Masukkan pangkat: ";
    cin >> y;

    // pow(nilai, pangkat) => Calculate the power of a number
    cout << "Hasil nilai " << x << " pangkat " << y << " adalah " << pow(x, y) << endl;

    return 0;
}