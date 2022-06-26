#include <iostream>

using namespace std;

class Pecahan {
    public:
    int pembilang, penyebut;

    Pecahan(int pembilang, int penyebut){
        this->pembilang = pembilang;
        this->penyebut = penyebut;
    }

    void cetak(){
        cout << pembilang << "/" << penyebut << endl;
    }

    Pecahan tambah(Pecahan p2){
        p2.pembilang = (pembilang*p2.penyebut) + (penyebut*p2.pembilang);
        p2.penyebut = (penyebut*p2.penyebut);

        return p2;
    }
    
    Pecahan kurang(Pecahan p2){
        p2.pembilang = (pembilang*p2.penyebut) - (penyebut*p2.pembilang);
        p2.penyebut = (penyebut*p2.penyebut);

        return p2;
    }

    float toDesimal(){
        float x = pembilang;
        float y = penyebut;
        return x/y;
    }

    int isEqual(Pecahan p2){
        float x1 = pembilang;
        float y1 = penyebut;
        float h1 = x1/y1;
        
        float x2 = p2.pembilang;
        float y2 = p2.penyebut;
        float h2 = x2/y2;
        if(h1==h2){
            return 1;
        }
        return 0;
    }
    int isBigger(Pecahan p2){
        float h1 = pembilang/penyebut;
        float h2 = p2.pembilang/p2.penyebut;
        if(h1>h2){
            return 1;
        }
        return 0;
    }
};

int main(){
    Pecahan pch1(5, 9);
    printf("%d / %d \n", pch1.pembilang, pch1.penyebut);
    
    Pecahan pch2(7, 2);
    pch2.cetak();

    Pecahan pch3(4, 9);
    Pecahan hasil = pch3.tambah(Pecahan(1, 2));
    hasil.cetak();

    Pecahan pch4(5, 7);
    Pecahan hasil2 = pch4.tambah(Pecahan(1, 4));
    hasil2.cetak();

    Pecahan pch5(4, 9);
    Pecahan hasil3 = pch5.kurang(Pecahan(1, 5));
    hasil3.cetak();

    Pecahan pch6(5, 7);
    Pecahan hasil4 = pch6.kurang(Pecahan(1, 4));
    hasil4.cetak();

    printf("%.2f\n", Pecahan(4, 9).toDesimal());

    Pecahan pch7(4, 9);
    int equal = pch7.isEqual(Pecahan(8, 18));
    cout << equal << endl;
    	
    Pecahan pch9(4, 9);
    int equal2 = pch9.isEqual(Pecahan(6, 20));
    cout << equal2 << endl;

    Pecahan pch8(14, 2);
    int bigger = pch8.isBigger(Pecahan(7, 2));
    cout << bigger << endl;

    return 0;
}