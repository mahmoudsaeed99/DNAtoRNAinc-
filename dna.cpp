#include "dna.h"
#include <iostream>
#include <fstream>
#include "rna.h"
using namespace std;
ofstream myfile("C:\\Users\\mahmoud saeed\\Desktop\\assig.4\\DNA.txt");
/*DNA::DNA(DNA& d)
{
    //ctor
}
*/
DNA::~DNA()
{
    //dtor
}
/*void DNA::getstrand(){
    cout<<"put first strand\n";
    cin>>d1;
    transposestrand();
}
*/
void DNA::transposestrand(){
    int y=0,o;
    while(y<2){
            cout<<endl;
            cout<<"which type you will write\n1-ASCCI\n2-characters\n";
            cin>>o;
            cout<<"enter NAme & First Strand"<<endl;
            if(o==1){
                cin>>d4>>d13;
                myfile<<d4;
                for(int i=0;i<d13.size();i+=2){
                    if(d13[i]=='6'&&d13[i+1]=='5'){
                        d1[i]='A';
                        myfile<<d1[i];
                    }else if(d13[i]=='6'&&d13[i+1]=='7'){
                        d1[i]='C';
                        myfile<<d1[i];
                    }else if(d13[i]=='7'&&d13[i+1]=='1'){
                        d1[i]='G';
                        myfile<<d1[i];
                    }else if(d13[i]=='8'&&d13[i+1]=='4'){
                        d1[i]='T';
                        myfile<<d1[i];
                    }
                    else{
                        cout<<"error";
                        transposestrand();
                    }
                }
            myfile<<endl;}
            else{
                cin>>d4>>d1;

            try{
        for(int c=0;c<d1.size();c++){
            if(d1[c]!='A' &&d1[c]!='T' &&d1[c]!='G' &&d1[c]!='C' ){
                throw 0;
            }

        }
    }
    catch(int e){
        cout<<"ERROR CHARS MUST CONT (A-G-C-T)"<<endl;
        transposestrand();
    }
            d3=d1;
            d2=d1;
        for(int i=0;i<d1.size();i++){
        if(d1[i]=='A'){
            d1[i]='T';

        }
        else if(d1[i]=='T'){
            d1[i]='A';

        }
        else if(d1[i]=='G'){
            d1[i]='C';

        }
        else{
            d1[i]='G';

        }



    }
    myfile<<d4<<" "<< d3 <<" "<<d1<<endl;
    y++;

    }}
    myfile.close();

}
void DNA::transposetorna(){
    ifstream myfile ("C:\\Users\\mahmoud saeed\\Desktop\\assig.4\\DNA.txt");

    cout<<"put hte name"<<endl;
    string name;
    cin>>name;
    while(myfile>>d4>>d1){
               if(name==d4){
                d2=d1;
               }
    }
    ofstream myrna ("C:\\Users\\mahmoud saeed\\Desktop\\assig.4\\RNA.txt");
    for(int i=0;i<d4.size();i++){
    if(d4[i]=='T'){
        d3[i]='U';
    }
    else{
        d3[i]=d4[i];
    }
    myrna<<d3[i];

}

}
void DNA::dnatoprotein(){
    transposetorna();
    transposetoprotein();
}

bool DNA::operator==(DNA&d){
    ifstream myfile;
    myfile.open("C:\\Users\\mahmoud saeed\\Desktop\\assig.4\\DNA.txt");
    cout<<"enter the name";
    string n1,n2;
    cin>>n1>>n2;
    while(myfile>>d4>>d3>>d1){
        if(n1==d4){
            d9=d3;
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
bool DNA::operator!=(DNA&d){
    ifstream myfile;
    myfile.open("C:\\Users\\mahmoud saeed\\Desktop\\assignment4.1\\DNA.txt");
    cout<<"enter the name";
    string n1,n2;
    cin>>n1>>n2;
    while(myfile>>d4>>d3>>d1){
        if(n1==d4){
            d9=d3;
        }
        else if(n2==d4){
            d10=d3;
        }
        for(int i=0;i<d1.size();i++){
            if(d9[i]==d10[i]){
                return false;
            }
            return true;
        }
    }

}
void DNA::operator+(DNA&d){
    ifstream myfile("C:\\Users\\mahmoud saeed\\Desktop\\assig.4\\DNA.txt");
    ofstream rnafile("C:\\Users\\mahmoud saeed\\Desktop\\assig.4\\calcDNA.txt");

    cout<<"enter the name";
    string n1,n2;
    cin>>n1>>n2;
    while(myfile>>d4>>d3>>d1){
        if(n1==d4){
                d11=d3;
        }
         if(n2==d4){
            d12=d3;
        }

        }
        cout<< d11+d12;



        if (myfile.is_open()) {
                    rnafile << d11+d12 << endl;
                };



    }

void DNA::printData() {
    ifstream myfile;
    myfile.open("C:\\Users\\mahmoud saeed\\Desktop\\assig.4\\DNA.txt");
    cout<<"Enter name : ";
    string name;
    cin>>name;
    while(myfile >> d4 >>d3>>d1){
        cout<<d4;
        if(name == d4){
            cout<<"name is : "<<d4<<endl;
            cout<<"DNA: ";
            cout<<d3<<endl;
        }
    }
}


