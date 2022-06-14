#include <iostream>

using namespace std;

typedef struct VolumeK {
    float x;
    float phi;
    int r;
    int t;
};

int main(){
    // Deklarasi
    VolumeK vk;
    float volume;
    // vk.x = 1/3;
    vk.x = 0.3;
    vk.phi = 3.14;
    
    // Input Jari Jari dan Tinggi Kerucut
    printf("Masukkan Jari Jari Kerucut: ");
    scanf("%d", &(vk.r));
    printf("Masukkan Tinggi Kerucut: ");
    scanf("%d", &(vk.t));

    // Perhitungan Volume Kerucut
    volume = (vk.x * vk.phi * (vk.r * vk.r) * vk.t);

    // print hasil
    printf("Volume Kerucut: %.2f", volume);

    return 0;
}