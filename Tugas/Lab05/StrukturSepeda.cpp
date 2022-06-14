#include <iostream>
#include <cstring>

using namespace std;

typedef struct Sepeda{
    char merk[8];
    char type[14];
    int tahun;
    char harga[10];
};

int main(){
    // Deklarasi
    Sepeda sepeda;
    strcpy(sepeda.merk, "Polygon");
    strcpy(sepeda.type, "Sepeda Gunung");
    sepeda.tahun = 2013;
    strcpy(sepeda.harga, "2.000.000");

    // Menampilkan Data
    printf("%s\n", sepeda.merk);
    printf("%s\n", sepeda.type);
    printf("%d\n", sepeda.tahun);
    printf("%s\n", sepeda.harga);

    return 0;
}