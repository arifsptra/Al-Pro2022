#include <iostream>

using namespace std;

typedef struct LuasL {  
    float phi;
    int r;
};

int main() {
    // Deklarasi
    LuasL ll;
    // ll.phi = 22/7;
    ll.phi = 3.14;
    float luas;

    // Input Jari Jari Lingkaran
    printf("Masukkan Jari Jari Lingkran: ");
    scanf("%d", &(ll.r));

    // Print Luas Lingkaran
    luas = ll.phi * ll.r * ll.r;
    printf("Luas Lingkaran: %.2f", luas);

    return 0;
}