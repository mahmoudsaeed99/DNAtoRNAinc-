#include "base.h"
#include "dna.h"
#include"rna.h"
#include "protein.h"
ofstream mypro("C:\\Users\\mahmoud saeed\\Desktop\\assig.4\\pro.txt");
/*base::base(base& t)
{
    ba=new char[sizeof(t.ba)];
    for(int i=0 ; i <sizeof(t.ba) ; i++)
        ba[i]=t.ba[i];
}*/
base::~base()
{
    //dtor
}
void base::putstrand(){
    int x ,m=1;
     DNA d;
     RNA r;
     protein p;
while(m==1){
cout<<"what tybe of strand you will put"<<endl;
cout<<"1-DNA \n 2-RNA \n 3-protein\n4-end"<<endl;
cin>>x;

if(x==1){

  d.transposestrand();
  m=1;
 //cout<< d1+d2;
  }



else if(x==2){
r.getrna();
m=1;
}
else if(x==3) {
     p.getpro();
     m=1;
}
else{
    m=2;
}
}
}
void base::doLCS(){
ifstream myfile("C:\\Users\\mahmoud saeed\\Desktop\\assig.4\\DNA.txt");
string n1,n2;
cout<<"put the two names"<<endl;
cin>>n1>>n2;
 while(myfile>>d4>>d1){
               if(n1==d4){
                d2=d1;
               }
               if(n2==d4){
                d10=d1;
               }}
        for(int i=0;i<d2.size();i++){
            for(int j=0;j<d10.size();j++){
                if(d2[i]==d10[j]){
                    d11[i]==d2[i];

                }
            }
            cout<<d11;



}
/*
for(int i=0;i<d1.size();i++){
        int c=0;
    for(int j=0;j<d11.size();j++){
        if(d11[i]==d11[j]){
            c++;
        }
    }
    if(c==0){
        cout<<d11[i];
    }
}*/
 }
void base::transposetoprotein(){
    cout<<"enter"<<endl;
    string test1;
    cin>>test1;
    ifstream myrna("C:\\Users\\mahmoud saeed\\Desktop\\assig.4\\RNA.txt");
    ifstream c("C:\\Users\\mahmoud saeed\\Desktop\\assig.4\\c.txt");
    bool f=false;
    while(myrna>>d4>>d3){
            if(test1==d4){
                    f=true;
                    break;
            }}
            cout<<d3;
            if(f){
                while(c>>codon>>x){
                        cout<<d3.size();
        for (int i = 0; i <d3.size() ; i+=3) {
            for (int j = 0; j <codon.size() ; j+=3) {
                if(d3[i]==codon[j] &&d3[i+1]==codon[j+1] &&d3[i+2]==codon[j+2]  ){
                    if(myrna.is_open()){
                        mypro<<x;
                    }
                }
                else if(d3[i]=='U' &&d3[i]=='A' &&d3[i]=='G'  || d3[i]=='U' &&d3[i]=='A' &&d3[i]=='A' ||
                        d3[i]=='U' &&d3[i]=='G' &&d3[i]=='A' ){
                    break;
                }
            }
        }


    }

    }
    myrna.close();
    c.close();
    mypro.close();
             }

