#ifndef RNA_H
#define RNA_H
#include "base.h"
#include <string>

using namespace std;

class RNA:public base
{
    public:
       //RNA(RNA&r);
        virtual ~RNA();
        void getrna();
        void rnatodna();
       istream& operator>>(string d3);
       bool operator==(RNA&r);
        bool operator!=(RNA&r);
        void operator+(RNA&r);


    protected:

    private:
};

#endif // RNA_H
