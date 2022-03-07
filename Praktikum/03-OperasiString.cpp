#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char name[25];

    // strcpy => Copying an origin string to a destination string variable
    strcpy(name,"Arif Saputra");
    cout << name << endl;

    // strlen => Gets the number of characters from a string
    cout << "Number of characters: " << strlen(name);

    return 0;
}