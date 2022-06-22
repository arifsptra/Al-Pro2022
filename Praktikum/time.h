#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Waktu{
    public:
    int jj, mm, dd;

    Waktu(int jj, int mm, int dd){
        this->jj = jj;
        this->mm = mm;
        this->dd = dd;

        if((mm>59) || (mm<0)){
            this->mm = 0;
        }
        if((dd>59) || (dd<0)){
            this->dd = 0;
        }
    }

    string to_string(){
        /*string sjj = to_string(jj);
        string smm = to_string(mm);
        string sdd = to_string(dd);
        return sjj+":"+smm+":"+sdd;*/
        return std::to_string(jj) + ":" + std::to_string(mm) + ":" + std::to_string(dd);
    }

    int ke_detik(){
        return jj*3600 + mm*60 + dd;
    }

    Waktu detik_ke_waktu(int detik){
        int jj = detik/3600;
        int mm = (detik%3600)/60;
        int dd = detik%60;
        return Waktu(jj, mm, dd);
    }

    Waktu tambah(Waktu waktu2){
        int detik = this->ke_detik() + waktu2.ke_detik();
        return this->detik_ke_waktu(detik);
    }

    Waktu kurang(Waktu waktu2){
        int detik = this->ke_detik() - waktu2.ke_detik();
        if(detik<=0){
            return detik_ke_waktu(detik);
        }
        return detik_ke_waktu(0);
    }
};

#endif // TIME_H_INCLUDED
