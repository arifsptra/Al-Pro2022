#include <iostream>

using namespace std;

int main()
{
    int a[3][5] = {{15,17,22,22,20},{20,22,30,30,25},{10,15,20,20,17}};
    int x;
    string tempat;
    int kilo;

    cin >> x;

    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            if(x==a[i][j]){
            if(i==0){
                tempat="Gunungpati";
            }else if(i==1){
                tempat="Pedurungan";
            }else if(i==2){
                tempat="Genuk";
            }
        }
        if(x==a[i][j]){
            cout << "Suplay " << x << " kg ada di " << tempat << " pada minggu ke-" << j+1 <<endl;
        }
        }
    }
    return 0;
}