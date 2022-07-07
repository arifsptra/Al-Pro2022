#include <iostream>

using namespace std;

int main(){
    int x;
    cout << "Masukkan Nilai I: ";
    cin >> x;
    int i[x][x];

    int z = 0;
    for(int o=0; o<x; o++){
        for(int p=0; p<x; p++){
            if(p == z){
                cout << 1;
            }else {
                cout << 0;
            }
        }
        z++;
        cout << endl;
    }
    return 0;
}