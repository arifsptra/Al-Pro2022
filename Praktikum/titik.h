#ifndef TITIK_H_INCLUDED
#define TITIK_H_INCLUDED

#include <iostream>

using namespace std;

typedef struct T_Titik{
    public:
    int x;
    int y;
    T_Titik isiTitik(int a, int b){
        T_Titik temp;
        temp.x=a;
        temp.y=b;
        return temp;
    }

    void cetakTitik(T_Titik z){
        cout << "t.x :"<< z.x << endl;
        cout << "t.y :"<< z.y << endl;
    }

    void cetakArrayTitik(T_Titik *t){
        for(int i=0; i<10; i++){
            cout << "t.x :"<< t[i].x << endl;
            cout << "t.y :"<< t[i].y << endl;
        }
    }

    T_Titik* isiArrayTitik(T_Titik *t){
        for(int i=0; i<10; i++){
            t[i].x=i;
            t[i].y=i;
        }
        return t;
    }
};

#endif // TITIK_H_INCLUDED
