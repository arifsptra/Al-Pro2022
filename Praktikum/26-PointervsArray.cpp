#include <iostream>

using namespace std;

int main(){
    char a[3] = {1, 2, 3};
    printf("0x%x 0x%x %d\n", a, &a, *a);
    // %x => print hexadecimal

    int *p = new int[3];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    printf("0x%x 0x%x %d\n", p, &p, *p);

    int *p2 = (int*)a;
    printf("Value of P2: 0x%x\n", *p2);

    // fail karena keterbatasan dari stack
    // char arr[1034996];

    // oke
    // char *p = new char[1034996];

    // tidak dapat menghapus array
    // char arr[100];
    // delete arr;

    // oke
    // char *p = new char[1034996];
    // delete p;

    // 2D Array
    int arr[2][3];
    arr[2][2] = 10;

    // Pointer-to-Pointer
    int **prr = new int*[2];
    prr[0] = new int[3];
    prr[1] = new int[3];
    prr[2][2] = 20;

    printf("%d\n", arr[2][2]);
    printf("%d\n", prr[2][2]);

    return 0;
}