// Soal 1
#include<iostream>
using namespace std;
class abc { 
   void f();
   void g();
   int x;
};

main() {
   cout<<sizeof(abc)<<endl;
}

// Soal 2
#include <iostream>

using namespace std;

int operator(int x, int y){
    int result;

    result = 0;
    while (y != 0){
        result = result + x;
        y = y - 1;
    }
    return result;
}

int main() {
    operator(5, 5);
    return(0);
}

// Soal 5
#include<iostream>
#include<string.h>
using namespace std;

main() 
{ 
   char s[] = "Hello\0Hi";   
   cout<<strlen(s)<<" "<<sizeof(s);
}

// Soal 6
#include <iostream>

    using namespace std;

    int operate (int a, int b)

    {

        return (a * b);

    }

    float operate (float a, float b)

    {

        return (a / b);

    }

    int main()

    {

        int x = 5, y = 2;

        float n = 5.0, m = 2.0;

        cout << operate(x, y) <<"\t";

        cout << operate (n, m);

        return 0;

    }

// Soal 7
#include<stdio.h>

int f(int n)

{

    if(n>0)

        return(n+f(n-2));

}

main()

{

    int n=10;

    int f(int n);

    printf("%d",f(n));

}

// Soal 8
#include<iostream>
using namespace std;
class abc
 { 
    public: 
    static int x; 
    int i; 

    abc() 
    {
        i = ++x;
    }
};

int abc::x;

main() { 
   abc m, n, p;   
   cout<<m.x<<" "<<m.i<<endl;
}

// Soal 9
#include <iostream>
#include <string.h>
using namespace std;

int proses(float a, int n)
{
    if(n=0) 
        return 1;
    else
        return a * proses(a,n-1);
}

int main()
{
    float a;
    int n;
    cout << "angka : "; cin >> a;
    cout << "asdf : " << endl; cin >> n;
    cout << "Hasil asdf dari : " << a << " asdf : " << n << " = "<< proses(a,n); 
}

// Soal 13 
#include <iostream>
using namespace std;

void cetak(int n)
{
    if (n>0)
    {
        printf ("cetak: %i",n+2);
        cetak(n-1);
    }
}

int main()
{
    float a;
    cout << "masukan data / nilai yang anda mau : "; cin >> a;
    cetak(a);
}

// Soal 15 
#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;
char rubah[1000];
void qwerty ( )
{
    int i,n,p;
    cout<<"output menjadi berikut ini: ";
    n=strlen(rubah);
    for(i=n-1; i>=0; i--)
    {
        cout<<rubah[i];
    }
}

int main()
{
    cout<<"masukkan DATA / NILAI yang anda maui: "; cin>>rubah;
    qwerty ();
}

// Soal 16
#include <iostream>
#include <string.h>
using namespace std;

int proses(float a, int n)
{
    if(n=0) 
        return 1;
    else
        return a * proses(a,n-1);
}

int main()
{
    float a;
    int n;
    cout << "angka : "; cin >> a;
    cout << "asdf : " ; cin >> n;
    cout << "Hasil asdf dari : " << a << " asdf : " << n << " = "<< proses(a,n); 
}

// Soal 17
 #include <iostream>

    using namespace std;

    class Box

    {

        public :

        double length;

        double breadth;

        double height;

    };

    int main( )

    {

        Box Box1;

        double volume;

        Box1.height = 5;

        Box1.length = 6;

        Box1.breadth = 7.1;

        volume = Box1.height * Box1.length * Box1.breadth;

        cout << "Volume of Box1 : " << volume <<endl;

        return 0;

    }

// Soal 20
#include<iostream>
using namespace std;
void f()
{
   cout<<"Hello"<<endl;
}
main()
{
}