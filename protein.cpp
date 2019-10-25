#include "protein.h"
#include <iostream>
#include <fstream>
#include "base.h"

ofstream mypr("C:\\Users\\mahmoud saeed\\Desktop\\assig.4\\protein.txt");

using namespace std;

/*protein::protein(protein& p)
{
    //ctor
}
*/
protein::~protein()
{
    //dtor
}
void protein::getpro(){
    cout<<"enter your name:"<<endl;
    cin>>d6;
    cout<<"put the protein"<<endl;
    cin>>d7;
    mypr<<"name:"<<d6<<"   protein:"<<d7<<endl;


}
bool protein::operator!=(protein&p){
    ifstream myprotein;
    myprotein.open("C:\\Users\\mahmoud saeed\\Desktop\\assignment4.1\\protein.txt");
    cout<<"enter the name";
    string n1,n2;
    cin>>n1>>n2;
    while(myprotein>>d4>>d1){
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
bool protein::operator==(protein&d){
    ifstream mypro;
    mypro.open("C:\\Users\\mahmoud saeed\\Desktop\\assignment4.1\\pro.txt");
    int e=0;
    while(mypro>>d4){
        if(e==0){
            d9=d1;
        }
        else if(e==1){
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
void protein::operator+(protein&p){
    ifstream mypro("C:\\Users\\mahmoud saeed\\Desktop\\assig.4\\pro.txt");
    //ofstream rnafile("C:\\Users\\mahmoud saeed\\Desktop\\assig.4\\calcDNA.txt");
    int e=0;
    while(mypro>>d4){
        if(e==0){
                d11=d4;
        }
         if(e==1){
            d12=d1;
        }

        }
        cout<< d11+d12;
    }

