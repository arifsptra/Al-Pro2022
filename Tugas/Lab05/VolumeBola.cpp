#include <iostream>

using namespace std;

typedef struct VolumeB{
    float x;
    float phi;
    int r;
};

int main(){
    // Deklarasi
    VolumeB vb;
    float volume;
    // vb.x = 4/3;
    vb.x = 1.3;
    vb.phi = 3.14;

    // Input Jari Jari Bola
    printf("Masukkan Jari Jari Bola: ");
    scanf("%d", &vb.r);

    // Perhitungan Volume Bola
    volume = vb.x * vb.phi * (vb.r * vb.r * vb.r);

    // Print Hasil Volume Bola
    printf("Volume Bola: %.2f\n", volume);

    return 0;
}