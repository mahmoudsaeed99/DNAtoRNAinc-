#include "rna.h"
#include"dna.h"
#include <iostream>
#include <cmath>
#include <fstream>
#include "base.h"
ofstream myrna("C:\\Users\\mahmoud saeed\\Desktop\\assig.4\\RNA.txt");

using namespace std;
/*RNA::RNA(RNA&r)
{
    //ctor
}
*/
RNA::~RNA()
{
    //dtor
}

void RNA::getrna(){
    cout<<"enter NAme & RNA "<<endl;
            cin>>d4>>d3;
    try{
        for(int c=0;c<d3.size();c++){
            if(d3[c]!='A' &&d3[c]!='U' &&d3[c]!='G' &&d3[c]!='C' ){
                throw 0;
            }

        }
    }
    catch(int e){
        cout<<"ERROR CHARS MUST CONT (A-G-C-T)"<<endl;
    }
            myrna<<d4<<" "<<d3<<endl;

    }
 istream&RNA::operator>>(string d3){
    char x[100];
    for(int i=0;i<d3.size();i++){
        x[i]=d3[i];
        myrna<<"RNA:";
        myrna<<x[i];

    }
}
void RNA::rnatodna(){
    cout << "Enter the Name: ";
            string test;
            cin >> test;
            ifstream myfile("C:\\Users\\mahmoud saeed\\Desktop\\assig.4\\RNA.txt");
            ofstream outfile("C:\\Users\\mahmoud saeed\\Desktop\\assig.4\\RNATODNA.txt");
            bool f1 = false;
            while (myfile >> d4 >> d3  ) {
                if (test == d4) {
                    f1 = true;

                }
            }

                if (f1) {

                d8 = d3;
                for (int i = 0; i < d3.size(); i++) {
                    if (d3[i] == 'U') {
                        d8[i] = 'T';
                    }

                }

                if (myfile.is_open()) {
                    outfile << d4 << "---" << d8 << endl;
                };



            }
            else{
                cout<<"your Account isn't mwgood"<<endl;

            }
            myfile.close();
            outfile.close();

}
bool RNA::operator==(RNA&r){
    ifstream myrna;
    myrna.open("C:\\Users\\mahmoud saeed\\Desktop\\assignment4.1\\RNA.txt");
    cout<<"enter the name";
    string n1,n2;
    cin>>n1>>n2;
    while(myrna>>d4>>d1){
        if(n1==d4){
            d9=d1;
        }
        else if(n2==d4){
            d10=d1;
        }
        for(int i=0;i<d1.size();i++){
            if(d9[i]==d10[i]){
                return true;
            }
            return false;
        }
    }

}
bool RNA::operator!=(RNA&r){
    ifstream myrna;
    myrna.open("C:\\Users\\mahmoud saeed\\Desktop\\assignment4.1\\RNA.txt");
    cout<<"enter the name";
    string n1,n2;
    cin>>n1>>n2;
    while(myrna>>d4>>d1){
        if(n1==d4){
            d9=d1;
        }
        else if(n2==d4){
            d10=d1;
        }
        for(int i=0;i<d1.size();i++){
            if(d9[i]==d10[i]){
                return false;
            }
            return true;
        }
    }

}

void RNA::operator+(RNA&r){
    ifstream myrna("C:\\Users\\mahmoud saeed\\Desktop\\assig.4\\pro.txt");
   // ofstream rnafile("C:\\Users\\mahmoud saeed\\Desktop\\assig.4\\calcDNA.txt");

    cout<<"enter the name";
    string n1,n2;
    cin>>n1>>n2;
    while(myrna>>d4>>d1){
        if(n1==d4){
                d11=d4;
        }
         if(n2==d1){
            d12=d1;
        }

        }
        cout<< d11+d12;






    }



