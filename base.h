#ifndef BASE_H
#define BASE_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class base
{
    public:

       // base(base&t);
        virtual ~base();
        void putstrand();
        void transposetoprotein();
        void doLCS();



    protected:
        string d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d12,d13,d11,d20,x,codon;

    private:
};

#endif // BASE_H
