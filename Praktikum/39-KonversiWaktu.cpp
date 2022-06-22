#include <iostream>
#include "time.h"
#include <string>

using namespace std;

int main()
{
    Waktu dtWaktu[] = {Waktu(2, 15, 40), Waktu(4, 98, 53), Waktu(0, 39, 29)};
    cout << dtWaktu[0].to_string() << endl;
    cout << dtWaktu[1].to_string() << endl;
    cout << dtWaktu[2].to_string() << endl;
    cout << endl;

    Waktu wkt_tambah = dtWaktu[0]+dtWaktu[2];
    cout << wkt_tambah.to_string() << endl;

    Waktu kalian = Waktu(0, 30, 0);
    cout << kalian.to_string()<< endl;

    return 0;
}
