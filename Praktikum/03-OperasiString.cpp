#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char name[25];

    // strcpy => Copying an origin string to a destination string variable
    strcpy(name,"Arif Saputra");
    cout << name << endl;

    // strlen => Gets the number of characters from a string
    cout << "Number of characters: " << strlen(name) << endl;

    char hobi[30] = "Saya Memiliki Hobi ";
    char myHobi[50] = "Bermain Sepak Bola, Membaca Buku, dan Traveling";
    // strcat => Append the source string to the end of destination string
    cout << strcat(hobi, myHobi) << endl;

    // strupr => Converts each letter of a string to capital letters
    cout << strupr(hobi) << endl;

    // strlwr => Converts each letter of a string to all lowercase
    cout << strlwr(hobi) << endl;

    return 0;
}