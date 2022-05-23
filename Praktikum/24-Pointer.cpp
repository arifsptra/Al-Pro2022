#include <iostream> // Arif Saputra - A11.2021.13480

using namespace std;

int main(){
    int a[6] = {10, 20, 30, 40, 50, 60};
    int *p = a;

    cout << a << endl;
    cout << &a << endl;
    cout << *a << endl;

    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;

    cout << p+1 << endl;
    cout << (*p)+1 << endl;
    cout << *(p+1) << endl;
    cout << &p + 1 << endl;
    cout << &a + 1 << endl;
    // a++;
    cout << a << endl;
    p++;
    cout << p << endl;


    return 0;
}