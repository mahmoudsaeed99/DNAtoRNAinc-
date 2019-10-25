#ifndef DNA_H
#define DNA_H
#include"base.h"
#include <string>

using namespace std;

class DNA:public base
{
    public:
       // DNA(DNA& d);
        virtual ~DNA();
        void getstrand();
        void transposestrand();
        void transposetorna();
        void dnatoprotein();
       bool operator==(DNA&d);
        bool operator!=(DNA&d);
        void operator+(DNA&d);
        void printData();



    protected:

    private:
};

#endif // DNA_H
