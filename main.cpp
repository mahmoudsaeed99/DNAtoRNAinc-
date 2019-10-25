#include <iostream>
#include"base.h"
#include"dna.h"
#include"rna.h"
using namespace std;

int main(){
    int u;
    base b;
    DNA d1,d2;
    RNA r1,r2;
    while (true){
    cout<<"welcome to our program"<<endl;
    cout<<"what do you want?"<<endl;
    cout<<"1-enter data\n";
    cout<<"2-convert strand\n";
    cout<<"3-do lcs"<<endl;
    cin>>u;
    if(u==1){
        b.putstrand();

    }
    else if(u==2){
            int e;
        cout<<"1-convert DNA to RNA "<<endl;
        cout<<"2-convert RNA to DNA"<<endl;
        cout<<"3-convert DNA to protein"<<endl;
        cout<<"4-convert RNA to protein"<<endl;
    cin>>e;
    if(e==1){
        d1.transposetorna();
    }
    else if(e==2){
        r1.rnatodna();
    }
    else if(e==3){
        d1.dnatoprotein();
    }
    else{
        r1.transposetoprotein();
    }

    }
    else{
        b.doLCS();
    }

        }
   // r1.rnatodna();






    /*if(d1==d2){
        cout<<"F"<<endl;
    }*/
    //d1+d2;
    /*string g="mahmoud";
    string t="mohamed";
    int l=0;
    for(int i=0;i<g.size();i++){
            int c=0;
        for(int j=0;j<t.size();j++){
            if(g[i]==t[j]){
                c++;
            }
        }
    if(c>0){
        cout<<g[i];
        l++;
    }
    }*/


    //DNA b2;
    //b2.dnatoprotein();=
   // RNA b3;
    //b3.getrna();
    //b3.rnatodna();


   /* string x,y,z,s;
    cin>>x;

    try{
        for(int i=0;i<x.size();i++){
            if(x[i]!='A' &&x[i]!='T' &&x[i]!='G' &&x[i]!='C' ){
                throw 0;
            }

        }
    }
    catch(int e){
        cout<<"ERROR CHARS MUST CONT (A-G-C-T)"<<endl;
    }
y=x;
    for(int c =0;c<x.size();c++){
        if(x[c]='A'){
            y[c]='T';

        }


    }
    cout<<y<<endl;



*/
    return 0;
}
