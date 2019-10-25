#ifndef PROTEIN_H
#define PROTEIN_H
#include <iostream>
#include"base.h"
#include <string>
using namespace std;


class protein:public base
{
    public:
        //protein(protein&p);
        virtual ~protein();
        void getpro();
        bool operator==(protein&p);
        bool operator!=(protein&p);
        void operator+(protein&p);


    protected:

    private:
};

#endif // PROTEIN_H
